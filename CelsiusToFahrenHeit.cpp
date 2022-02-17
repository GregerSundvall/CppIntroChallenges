#include <iostream>
#include <conio.h>
using namespace std;

void CelsiusToFahrenheit()
{
    int input;

    cout << "Celsius To Fahrenheit" << endl;
    cout << "Input temperature in Celsius degrees:" << endl;
    cin >> input;

    int result = input * 9 / 5 + 32;

    //cout << input << " degrees Celsius equals " << result << " degrees Fahrenheit" << endl;
    printf("%d degrees Celsius equals %d degrees Fahrenheit\n", input, result);

    cout << "Press Enter to exit" << endl;

    _getch();
}
