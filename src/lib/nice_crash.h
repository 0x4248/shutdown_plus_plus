// Nice crash
// A simple header file to create nice crash message output.
////////////////////////////////////////////////////////////////////////////////////////////////////
// By: awesomelewis2007
// GitHub: https://www.github.com/awesomelewis2007/nice_crash
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CRASH
#define CRASH
#include <iostream>
#include <string>
#include "lib/colour.h"
#include <ctime>

namespace nice_crash
{
    ascii_colours::normal normal;
    ascii_colours::bold bold;
    ascii_colours::bold_underline bold_underline;

    void crash(std::string title, std::string body,std::string error_code, std::string other = "", std::string top_message = "A problem has occurred and the program has crashed.", std::string border = "-" , bool date_time = true)
    {
        std::string msg;
        std::string border_sides;
        for (int i = 0; i < title.length() + 5; i++)
        {
            border_sides += border;
        }
        
        msg = "[" + bold.red + "X" + bold.reset + "]"+border_sides+"[" + bold.red + title + bold.reset + "]"+border_sides+"[" + bold.red + "X" + bold.reset + "]" + "\n";
        msg += top_message + "\n";
        msg += "Error code: " + bold_underline.red +error_code + bold_underline.reset + "\n";
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            msg += "Time: [" + normal.cyan + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "]" + "\n";
        }
        msg += "\n";
        msg += body + "\n";
        msg += "\n";
        msg += other + "\n";
        msg += "\n";
        msg += "[" + bold.red + "X" + bold.reset + "]"+border_sides+"[" + bold.red + "END OF MESSAGE" + bold.reset + "]"+border_sides+"[" + bold.red + "X" + bold.reset + "]" + "\n";
        std::cout << msg << std::endl;
    }
    void warning(std::string title, std::string body,std::string error_code, std::string other = "", std::string top_message = "A problem has occurred and the program has issued a warning.", std::string border = "-" , bool date_time = true)
    {
        std::string msg;
        std::string border_sides;
        for (int i = 0; i < title.length() + 5; i++)
        {
            border_sides += border;
        }
        
        msg = "[" + bold.yellow + "!" + bold.reset + "]"+border_sides+"[" + bold.yellow + title + bold.reset + "]"+border_sides+"[" + bold.yellow + "!" + bold.reset + "]" + "\n";
        msg += top_message + "\n";
        msg += "Warning code: " + bold_underline.yellow +error_code + bold_underline.reset + "\n";
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            msg += "Time: [" + normal.cyan + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "]" + "\n";
        }
        msg += "\n";
        msg += body + "\n";
        msg += "\n";
        msg += other + "\n";
        msg += "\n";
        msg += "[" + bold.yellow + "!" + bold.reset + "]"+border_sides+"[" + bold.yellow + "END OF MESSAGE" + bold.reset + "]"+border_sides+"[" + bold.yellow + "!" + bold.reset + "]" + "\n";
        std::cout << msg << std::endl;
    }
}

#endif // CRASH
