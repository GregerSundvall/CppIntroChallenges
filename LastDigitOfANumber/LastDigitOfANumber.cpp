#include <iostream>
#include <string>
using namespace std;


int main()
{
    int input;

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
        
        reversed.append(to_string(temp));
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
    cout << "Reversed numbers are " << reversed << endl;
    //printf("Reversed numbers are \n" + reversed);

    return 0;
}
