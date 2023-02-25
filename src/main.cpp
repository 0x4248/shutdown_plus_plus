// Shutdown++ - A shutdown command that executes commands before system shutdown is started to safely stop a servers processes. Alternatively it can be used to shutdown parts of a system.


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pwd.h>

#include "lib/nice_verbose.h"
#include "lib/nice_crash.h"

using namespace std;

#define VERSION "1.0.0"

int main(int argc, char *argv[])
{
    getpwuid(getuid())->pw_dir;
    string config_file_path = string(getpwuid(getuid())->pw_dir) + "/.config/shutdown.conf";
    bool continue_executing_without_warning = false;
    if (argc > 1)
    {
        nice_verbose_text::ok("Checking argument");
        if (string(argv[1]) == "-f")
        {
            nice_verbose_text::warn("User has supplied the -f flag. Showing warning message.");
            cout << "WARNING: You have supplied the -f flag. This will force shutdown the system without executing any commands." << endl;
            cout << "Are you sure you want to do this? (y/n): ";
            string answer;
            cin >> answer;
            if (answer != "y")
            {
                nice_verbose_text::ok("User has not supplied the y answer. Exiting.");
                return 0;
            }
            nice_verbose_text::ok("User has supplied the y answer. Forcing shutdown.");
            system("sudo shutdown now");
            return 0;
        }
        else if (string(argv[1]) == "-p")
        {
            nice_verbose_text::info("User has supplied the -p flag. Setting profile.");
            if (argc > 2)
            {
                config_file_path = argv[2];
                if (access(config_file_path.c_str(), F_OK) == -1)
                {
                    nice_crash::crash("SHUTDOWN++", "There was an error opening the profile file. Please check the file path and try again. The file may be unreadable if so check the permissions of the file.", "FILE_READ_ERROR", "Check the file path and try again.", "The file path you have provided does not exist or is not readable.");
                    return 1;
                }

                nice_verbose_text::ok("Profile set to: " + config_file_path);
            }
        }
        else if (string(argv[1]) == "-yp")
        {
            nice_verbose_text::info("User has supplied the -yp flag. Setting profile. There will be no warning message.");
            continue_executing_without_warning = true;
            if (argc > 2)
            {
                config_file_path = argv[2];
                if (access(config_file_path.c_str(), F_OK) == -1)
                {
                    nice_crash::crash("SHUTDOWN++", "There was an error opening the profile file. Please check the file path and try again. The file may be unreadable if so check the permissions of the file.", "FILE_READ_ERROR", "Check the file path and try again.", "The file path you have provided does not exist or is not readable.");
                    return 1;
                }

                nice_verbose_text::ok("Profile set to: " + config_file_path);
            }
        }
        else if (string(argv[1]) == "-v")
        {
            nice_verbose_text::info("User has supplied the -v flag. Showing version.");
            cout << "Shutdown++ version " << VERSION << endl;
            return 0;
        }
        else if (string(argv[1]) == "-h")
        {
            nice_verbose_text::info("User has supplied the -h flag. Showing help message.");
            cout << "Shutdown++ - A shutdown command that executes commands before system shutdown is started to safely stop a servers processes. Alternatively it can be used to shutdown parts of a system." << endl;
            cout << "Usage: shutdown++ [OPTION]" << endl;
            cout << "Options:" << endl;
            cout << "-p: Set the profile to use. The default profile is ~/.config/shutdown.conf" << endl;
            cout << "-yp: Set the profile to use and do not show a warning message. The default profile is ~/.config/shutdown.conf" << endl;
            cout << "-f: Force shutdown the system without executing any commands." << endl;
            cout << "-y: Do not show a warning message. (Only for default script)" << endl;
            cout << "-v: Show the version." << endl;
            cout << "-h: Show this help message." << endl;
            return 0;
        }
        else if (string(argv[1]) == "-y")
        {
            nice_verbose_text::warn("User has supplied the -y flag. There will be no warning message.");
            continue_executing_without_warning = true;
        }
        else
        {
            nice_verbose_text::error("Invalid argument. Exiting.");
            return 1;
        }
    }
    nice_verbose_text::ok("Checking if config file exists");
    if (access(config_file_path.c_str(), F_OK) == -1)
    {
        nice_crash::crash("SHUTDOWN++", "The default config file does not exist. Please create one.", "DEFAULT_FILE_NOT_FOUND", "Create the file at ~/.config/shutdown.conf", "The file does not exist. Please create it.");
        return 1;
    }
    nice_verbose_text::ok("Config file exists. Reading it now.");
    ifstream config_file;
    config_file.open(config_file_path);
    string line;
    string commands;

    while (getline(config_file, line))
    {
        if (line[0] != '#')
        {
            commands = line;
        }
    }
    config_file.close();
    if (commands == "commands = ")
    {
        nice_verbose_text::error("There are no commands in the config file. Exiting.");
        return 0;
    }
    nice_verbose_text::ok("There are commands in the config file. Executing them now.");
    commands = commands.substr(11);
    string command;
    int i = 0;
    // ask if the user wants to execute the commands and show them
    if (!continue_executing_without_warning)
    {
        nice_verbose_text::warn("The following commands will be executed: " + commands);
        cout << "Are you sure you want to execute these commands? (y/n): ";
        string answer;
        cin >> answer;
        if (answer != "y")
        {
            nice_verbose_text::ok("User has not supplied the y answer. Exiting.");
            return 0;
        }
        nice_verbose_text::ok("User has supplied the y answer. Executing commands.");
    }
    while (i < commands.length())
    {
        if (commands[i] == ',')
        {
            nice_verbose_text::info("Executing command: " + command);
            if (command.find("sudo shutdown") != string::npos)
            {
                if (!continue_executing_without_warning){
                    nice_verbose_text::warn("User has supplied the sudo shutdown command. Showing warning message.");
                    cout << "WARNING: You have supplied the sudo shutdown command. This will shutdown the system." << endl;
                    cout << "Are you sure you want to do this? (y/n): ";
                    string answer;
                    cin >> answer;
                    if (answer != "y")
                    {
                        nice_verbose_text::ok("User has not supplied the y answer. Exiting.");
                        return 0;
                    }
                    nice_verbose_text::ok("User has supplied the y answer. Forcing shutdown.");
                }
            }
            int out;
            out = system(command.c_str());
            if (out == 1)
            {
                nice_verbose_text::error("There was an error executing the command: " + command);
                nice_verbose_text::error("The error code was: " + to_string(out));
            }
        }
        else
        {
            command += commands[i];
        }
        i++;
    }
    nice_verbose_text::info("Executing command: " + command);
    system(command.c_str());
    nice_verbose_text::ok("All commands have been executed. Shutdown file completed.");
    return 0;
}