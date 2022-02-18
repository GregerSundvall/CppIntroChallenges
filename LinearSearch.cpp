
#include <string>
#include <conio.h>
#include <iostream>

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



void linear_search()
{
    int numbers[] {0,1,2,3,4,5,6,7,8,9};
    
    int query;
    int* position;
    
    cout << "Linear search" << endl;
    cout << "Numbers are: " << getIntArrayAsString(numbers, size(numbers)) << "." << endl;
    cout << "What number should I search for?" << endl;
    cin >> query;

    position = find(numbers, numbers + size(numbers), query);

    if (position != numbers + size(numbers))
    {
        cout << query << " was found at position " << position << "." << endl;
    }
    else
    {
        cout << query << " was not in the array" << endl;
    }
    
    
    cout << "Press Enter to exit" << endl;
    _getch();
}