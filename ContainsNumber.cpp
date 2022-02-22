#include <iostream>
#include <string>

using namespace std;


void containsNumber()
{
    int number = 123123;
    string numberString = std::to_string(number);
    char query = '5';
    bool doesContain = false;

    for (size_t i = 0; i < size(numberString) -1; ++i)
    {
        if (numberString[i] == query)
        {
            doesContain = true;
            break;
        }
    }

    doesContain ? cout << number << " does contain the number " << query << endl :
                    cout << number << " does not contain the number " << query << endl;
    
}
