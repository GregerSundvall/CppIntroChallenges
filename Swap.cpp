#include <iostream>
#include <conio.h>
using namespace std;

void swapByReference(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

void SwapByPointer(int* first, int* second)
{
    int* temp = first;
    first = second;
    second = temp;
}

void Swap()
{
    int firstNr;
    int secondNr;

    std::cout << "Swap" << std::endl;
    std::cout << "Input first integer:" << std::endl;
    std::cin >> firstNr;
    std::cout << "Input second integer:" << std::endl;
    std::cin >> secondNr;

    cout << "OK, numbers are " << firstNr << " and " << secondNr << endl;

    // Swab by STL method
    swap(firstNr, secondNr);
    cout << "Swapped with STL swap: "<< firstNr << " and " << secondNr << endl;

    // By ref
    swapByReference(firstNr, secondNr);
    cout << "Swapped by ref: "<< firstNr << " and " << secondNr << endl;


    // By pointers
    SwapByPointer(&firstNr, &secondNr);
    cout << "Swapped by pointers: "<< firstNr << " and " << secondNr << endl;


    cout << "Press Enter to exit" << endl;

    _getch();
}
