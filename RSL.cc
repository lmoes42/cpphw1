/******************************************************************************
* File:             RSL.cc
*
* Author:           Levi Moes
* Created:          09/20/21
* Description:      Output some text as a raw string literal
* Inspired by this stackoverflow post
* https://stackoverflow.com/questions/30308088/include-in-raw-string-literal-without-terminating-said-literal
*****************************************************************************/

#include <iostream>

// Makes my syntax checker flood me with errors
// but hey, it compiles
// exercise said I had to write this outside my main,
// dunno why
std::string output = R"###(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)")###";
// As the string we want to print contains "( we
// have to use some different pattern which it doesn't contain

int main()
{
    std::cout << output;    // output output
}
