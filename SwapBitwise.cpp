
#include <conio.h>
#include <iostream>

using namespace std;


void swapBitwise()
{
    int x = 10;
    int y = 15;

    x ^= y;
    y ^= x;
    x ^= y;

    // Or, longer
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;


    // Math only
    x = x + y;
    y = x - y;
    x = x - y;
}
