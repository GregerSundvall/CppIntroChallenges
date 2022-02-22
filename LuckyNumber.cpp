#include <iostream>
#include <string>

using namespace std;


void luckyNumber(){
    int numberToCheck = 123456456789;
    string numberString = std::to_string(numberToCheck);

    bool isLucky = true;
    
    int digits[10] = {};

    for (size_t digit = 0; size(numberString) -1; digit++)
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