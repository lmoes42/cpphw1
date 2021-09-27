/******************************************************************************
* File:             ex7.cc
* Description:      Apply the operations in the exercise
*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    uint64_t value = 0;			// initialize a 64 bit value and set it to 0

    value = value + 3;			// we add three (corresponding to the last action we have to do)
    value = value << 5;     // Bitshift to the left 5 times
    value = value + 0;			// add 0
    value = value << 4;     // Bitshift 4 times
    value = value + 7;			// the actions are done in reverse because binary numbers read from right to left

    value = value << 4;
    value = value + 15;
    value = value << 4;
    value = value + 15;
    value = value << 4;

    value = value + 7;
    value = value << 4;
    value = value + 6;
    value = value << 5;
    value = value + 10;

    value = value << 4;
    value = value + 15;
    value = value << 3;
    value = value + 7;
    value = value << 1;

    cout << hex << value << '\n';	// prints the final output in hexedecimal
}
