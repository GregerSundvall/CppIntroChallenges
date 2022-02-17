#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
    while (true)
    {
        int input;
        string menu[] = {
            " 1: Absolute difference",
            " 2: Celsius to Fahrenheit",
            " 3: Even or odd",
            " 4: Last digit of a number",
            " 5: Swap",
            " 0: Exit program"
        };
        cout << "     MAIN MENU" << endl;
        cout << endl;
        for (auto basic_string : menu)
        {
            cout << basic_string << endl;
        }
        cout << endl;
        cout << "Input number of desired function:" << endl;
        cin >> input;

        // switch (input)
        // {
        // case 0: return 0;
        // case 1: AbsoluteDifference();
        // case 2: CelsiusToFahrenheit();
        // case 3: EvenOrOdd();
        // case 4: LastDigitOfANumber();
        // case 5: Swap();
        // default: continue;
        // }
    }
}


