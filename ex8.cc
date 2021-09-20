#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16); 	// initialize hexadecimal value
    size_t nibble = stoul(argv[2]);		// nibble to replace
    size_t replacement = stoul(argv[3]) % 16;	// new nibble (= 0 ... 15)

    size_t unifier = 15;			// creats a 1111 nibble
    unifier = unifier << (nibble * 4);		// sets the 1111 nibble to the appropiate location according to the offset
    replacement  = 15 - replacement;		// inverts the replacement to alow for xor shenanigans
    replacement  = replacement << (nibble * 4);	// sets the replacement to the appropiate location according to the offset
    value = value | unifier;			// creates a 111 nibble at the offset location
    value = value ^ replacement;		// puts the desired replacement at the correct location using xor

    cout << hex << value << '\n';		// outputs value as hexadecimal
}
