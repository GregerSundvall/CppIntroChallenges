#include <iostream>
#include <conio.h>


void AbsoluteDifference()
{
    int firstNr;
    int secondNr;
    int GetAbsolute(int i);

    std::cout << "Absolute difference" << std::endl;
    std::cout << "Input first integer:" << std::endl;
    std::cin >> firstNr;
    std::cout << "Input second integer:" << std::endl;
    std::cin >> secondNr;

    int result = GetAbsolute(GetAbsolute(firstNr) - GetAbsolute(secondNr));

    std::cout << "Absolute difference is " << result << std::endl;
    std::cout << "Press Enter to exit" << std::endl;

    _getch();
}

int GetAbsolute(int i)
{
    if (i <= 0)
    {
        i *= -1;
    }
    return i;
}

