#include <iostream>
#include <string>

using namespace std;

//TODO not working. ATM need to get digits out of number.
int main()
{
    int numberToCheck;
    bool isLucky = true;
    int digits[10] = {};
    
    cout << "Input number to check:" << endl;
    cin >> numberToCheck;
    int* pointer = &numberToCheck;
    
    for (int i = 0; i < to_string(numberToCheck).length(); i++)
    {
        if (*(pointer + i) > 0)
        {
            isLucky = false;
        }
        else
        {
            *(pointer + i) += 1;
        }
    }

    if (isLucky)
    {
        cout << numberToCheck << "is a lucky number" << endl;
    }
    else
    {
        cout << numberToCheck << "is not a lucky number" << endl;
    }
    return 0;
}
