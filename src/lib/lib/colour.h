// Console_colour
// A simple header file to add colour to your console output.
////////////////////////////////////////////////////////////////////////////////////////////////////
// By: awesomelewis2007
// GitHub: https://www.github.com/awesomelewis2007/Console_colour
////////////////////////////////////////////////////////////////////////////////////////////////////
// Usage:
// Simple hello world program:
////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// #include "colour.h"
// int main()
// {
//     ascii_colours::normal normal;
//     ascii_colours::bold bold;
//     ascii_colours::italic italic;
//     ascii_colours::underline underline;
//     ascii_colours::bold_italic bold_italic;
//     ascii_colours::bold_underline bold_underline;
//     ascii_colours::underline_italic underline_italic;
//     ascii_colours::bold_underline_italic bold_underline_italic;
//     std::cout << normal.red << "Hello World!" << normal.reset << std::endl;
//     std::cout << bold.red << "Hello World!" << bold.reset << std::endl;
//     std::cout << italic.red << "Hello World!" << italic.reset << std::endl;
//     std::cout << underline.red << "Hello World!" << underline.reset << std::endl;
//     std::cout << bold_italic.red << "Hello World!" << bold_italic.reset << std::endl;
//     std::cout << bold_underline.red << "Hello World!" << bold_underline.reset << std::endl;
//     std::cout << underline_italic.red << "Hello World!" << underline_italic.reset << std::endl;
//     std::cout << bold_underline_italic.red << "Hello World!" << bold_underline_italic.reset << std::endl;
//     std::cout << normal.green << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.blue << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.yellow << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.magenta << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.cyan << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.white << "Hello World!" << normal.reset << std::endl;
//     std::cout << normal.black << "Hello World!" << normal.reset << std::endl;
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef COLOUR
#define COLOUR
#include <iostream>
#include <string>

namespace ascii_colours
{
    class normal
    {
        public:
            std::string red = "\033[31m";
            std::string green = "\033[32m";
            std::string yellow = "\033[33m";
            std::string blue = "\033[34m";
            std::string magenta = "\033[35m";
            std::string cyan = "\033[36m";
            std::string white = "\033[37m";
            std::string black = "\033[30m";
            std::string reset = "\033[0m";        
    };
    class bold
    {
        public:
            std::string red = "\033[1;31m";
            std::string green = "\033[1;32m";
            std::string yellow = "\033[1;33m";
            std::string blue = "\033[1;34m";
            std::string magenta = "\033[1;35m";
            std::string cyan = "\033[1;36m";
            std::string white = "\033[1;37m";
            std::string black = "\033[1;30m";
            std::string reset = "\033[0m";  
    }; 
    class underline
    {
        public:
            std::string red = "\033[4;31m";
            std::string green = "\033[4;32m";
            std::string yellow = "\033[4;33m";
            std::string blue = "\033[4;34m";
            std::string magenta = "\033[4;35m";
            std::string cyan = "\033[4;36m";
            std::string white = "\033[4;37m";
            std::string black = "\033[4;30m";
            std::string reset = "\033[0m";
    };
    class italic
    {
        public:
            std::string red = "\033[3;31m";
            std::string green = "\033[3;32m";
            std::string yellow = "\033[3;33m";
            std::string blue = "\033[3;34m";
            std::string magenta = "\033[3;35m";
            std::string cyan = "\033[3;36m";
            std::string white = "\033[3;37m";
            std::string black = "\033[3;30m";
            std::string reset = "\033[0m";
    };
    class bold_underline
    {
        public:
            std::string red = "\033[1;4;31m";
            std::string green = "\033[1;4;32m";
            std::string yellow = "\033[1;4;33m";
            std::string blue = "\033[1;4;34m";
            std::string magenta = "\033[1;4;35m";
            std::string cyan = "\033[1;4;36m";
            std::string white = "\033[1;4;37m";
            std::string black = "\033[1;4;30m";
            std::string reset = "\033[0m";
    };
    class bold_italic
    {
        public:
            std::string red = "\033[1;3;31m";
            std::string green = "\033[1;3;32m";
            std::string yellow = "\033[1;3;33m";
            std::string blue = "\033[1;3;34m";
            std::string magenta = "\033[1;3;35m";
            std::string cyan = "\033[1;3;36m";
            std::string white = "\033[1;3;37m";
            std::string black = "\033[1;3;30m";
            std::string reset = "\033[0m";
    };
    class bold_underline_italic
    {
        public:
            std::string red = "\033[1;4;3;31m";
            std::string green = "\033[1;4;3;32m";
            std::string yellow = "\033[1;4;3;33m";
            std::string blue = "\033[1;4;3;34m";
            std::string magenta = "\033[1;4;3;35m";
            std::string cyan = "\033[1;4;3;36m";
            std::string white = "\033[1;4;3;37m";
            std::string black = "\033[1;4;3;30m";
            std::string reset = "\033[0m";
    };
    class underline_italic
    {
        public:
            std::string red = "\033[4;3;31m";
            std::string green = "\033[4;3;32m";
            std::string yellow = "\033[4;3;33m";
            std::string blue = "\033[4;3;34m";
            std::string magenta = "\033[4;3;35m";
            std::string cyan = "\033[4;3;36m";
            std::string white = "\033[4;3;37m";
            std::string black = "\033[4;3;30m";
            std::string reset = "\033[0m";
    };

}

#endif // COLOUR