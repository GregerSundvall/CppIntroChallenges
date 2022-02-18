#include <algorithm>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

string getIntArrayAsString(int array[], size_t length)
{
    string s;
    for (size_t i = 0; i < length -1; ++i)
    {
        s.append(to_string(array[i]));
        s.append(" ");
    }
    return s;
}

void arithmetic_progression()
{
    int input[5]; 
    int sortedInput[5];
    bool isAP = true;
    
    cout << "Arithmetic Progression" << endl;
    cout << "I need 5 numbers." << endl;
    for (int i = 0; i < size(input) -1; ++i)
    {
        cout << "Input a number:" << endl;
        cin >> input[i];
    }

    sort(sortedInput,sortedInput + size(sortedInput));

    int diff = sortedInput[1] - sortedInput[0];
        
    for (int i = 1; i < size(sortedInput) -2; ++i)
    {
        if (sortedInput[i+1] - sortedInput[i] != diff)
        {
            isAP = false;
            break;
        }
    }

    if (isAP)
    {
        cout << "Sequence " << getIntArrayAsString(input, size(input)) << " does have AP" << endl;
    }
    else
    {
        cout << "Sequence " << getIntArrayAsString(input, size(input)) << " does NOT have AP" << endl;
    }

    cout << "Press Enter to exit" << endl;
    _getch();

    
};


