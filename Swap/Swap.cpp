#include <iostream>

using namespace std;


void swapByReference(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

void SwapByPointer(int* first, int* second)
{
    int* temp = *(int**)first;
    *(int**)first = *(int**)second;
    *(int**)second = temp;
}

int main()
{
    int firstNr;
    int secondNr;

    cout << "Swap" << std::endl;
    cout << "Input first number:" << std::endl;
    cin >> firstNr;
    cout << "Input second number:" << std::endl;
    cin >> secondNr;

    cout << "OK, numbers are " << firstNr << " and " << secondNr << endl;

    // Swab by STL method
    swap(firstNr, secondNr);
    cout << "Swapped with STL swap: "<< firstNr << " and " << secondNr << endl;

    // By ref
    swapByReference(firstNr, secondNr);
    cout << "Swapped again, by ref: "<< firstNr << " and " << secondNr << endl;
    
    // By pointers
    int* pointerFirstNr = &firstNr;
    int* pointerSecondNr = &secondNr;
    SwapByPointer(pointerFirstNr, pointerSecondNr);
    cout << "Swapped again, by pointers: "<< firstNr << " and " << secondNr << endl;

    return 0;
}

