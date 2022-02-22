#include <iostream>

using namespace std;


void luckyNumber(){
    int numberToCheck = 123456456789;

    bool isLucky = true;
    
    int digits[] = {};

    for (int digit : numberToCheck)
    {
        if (digits[digit] > 0)
        {
            isLucky = false;
            break;
        }
        digits[digit]++;
    }

    isLucky ?   cout << numberToCheck << "is a lucky number" << endl :
                cout << numberToCheck << "is not a lucky number" << endl;

}