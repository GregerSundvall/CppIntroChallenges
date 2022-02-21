
#include <conio.h>
#include <iostream>

using namespace std;

int retrieveBit(int position)
{
    int mask = 1 << position;
    int masked = position & mask;
    return  masked >> position;
}

void setBit(int& target, int position)
{
    int mask = 1 << position;
    target = mask | target;
}

void nthBitOfANumber()
{





    _getch();
}
