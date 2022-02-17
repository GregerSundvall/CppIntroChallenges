#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void LastDigitOfANumber()
{
    int input;

    cout << "Last digit of a number" << endl;
    cout << "Input integer:" << endl;
    cin >> input;

    int result = input % 10;

    printf("The last character is %d\n", result);

    string reversed;
    bool goOn = true;
    int multiplier = 10;
    while (goOn)
    {
        int temp = input % multiplier;
        if (multiplier > 10)
        {
            temp /= multiplier / 10;
        }
        
        reversed.append(std::to_string(temp));
        reversed.append(" ");
        
        if (input / multiplier != 0)
        {
            multiplier *= 10;
        }
        else
        {
            goOn = false;
        }
    }
    std::cout << "Reversed numbers are " << reversed << std::endl;
    //printf("Reversed numbers are \n" + reversed);

    cout << "Press Enter to exit" << endl;

    _getch();
}
