#include <iostream>

using namespace std;

int main()
{
    uint64_t value = 0;
    value = value + 3;
    value = value << 5;
    value = value + 0;
    value = value << 4 ;
    value = value + 7;
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
    cout << hex << value << '\n';
}
