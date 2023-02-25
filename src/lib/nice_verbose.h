// Nice verbose
// A simple header file to create nice verbose output.
////////////////////////////////////////////////////////////////////////////////////////////////////
// By: awesomelewis2007
// GitHub: https://www.github.com/awesomelewis2007/nice_verbose
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef VERBOSE
#define VERBOSE
#include <iostream>
#include <string>
#include "lib/colour.h"
#include <ctime>


namespace nice_verbose
{
    ascii_colours::normal normal;
    ascii_colours::bold bold;
    ascii_colours::underline underline;

    void debug(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.cyan + "*" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void log(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.green + "+" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void info(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.blue + "i" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void warn(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.yellow + "!" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void question(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.yellow + "?" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.red + "x" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void critical_error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.red + "X" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void major_critical_error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.red + "X" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += bold.red + message + bold.reset;
        std::cout << msg << std::endl;
    }
    void success(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.green + "+" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += bold.green + message + bold.reset;
        std::cout << msg << std::endl;
    }
    void important(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.blue + "i" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += bold.blue + message + bold.reset;
        std::cout << msg << std::endl;
    }
}
namespace nice_verbose_text
{
    ascii_colours::normal normal;
    ascii_colours::bold bold;
    ascii_colours::underline underline;

    void ok(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.green + "  OK  " + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void info(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.blue + " INFO " + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void warn(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.yellow + " WARN " + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }

    void error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.red + "ERROR " + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void critical_error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.red + "CRITICAL" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void major_critical_error(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + bold.red + "MAJOR ERROR" + bold.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += bold.red + message + bold.reset;
        std::cout << msg << std::endl;
    }
    void failed(std::string message, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + normal.red + "FAILED" + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
    void custom(std::string message, std::string verbose_level, std::string colour = normal.blue, bool date_time = false, bool logo = true, bool date_time_colour = true)
    {
        std::string msg;
        if (logo){
            msg = "[" + colour + verbose_level + normal.reset + "] ";
        }
        if (date_time){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            if(date_time_colour){
                msg += "[" + normal.blue + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + normal.reset + "] ";
            } else {
                msg += "[" + std::to_string(1900 + ltm->tm_year) + "-" + std::to_string(1 + ltm->tm_mon) + "-" + std::to_string(ltm->tm_mday) + " " + std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec) + "] ";
            }
        }
        msg += message;
        std::cout << msg << std::endl;
    }
}

#endif // VERBOSE