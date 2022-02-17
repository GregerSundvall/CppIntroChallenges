#include <iostream>
#include <conio.h>
using namespace std;

void EvenOrOdd()
{
    int input;

    cout << "Even or odd" << endl;
    cout << "Input any integer:" << endl;
    cin >> input;

    string result = input % 2 == 0 ? "even" : "odd";

    cout << input << " is an " << result << " number" << endl;

    cout << "Press Enter to exit" << endl;

    _getch();
}
