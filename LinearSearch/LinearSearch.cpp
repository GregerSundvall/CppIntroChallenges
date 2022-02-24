
#include <string>
#include <iostream>

using namespace std;

string getIntArrayAsString(int array[], size_t length);

int main()
{
    int numbers[] {0,1,2,3,4,5};
    
    int query;
    int position = -1;
    
    cout << "Linear search" << endl;
    cout << "Numbers are: " << getIntArrayAsString(numbers, size(numbers)) << endl;
    cout << "What number should I search for?" << endl;
    cin >> query;

    for (int i = 0; i < size(numbers); ++i)
    {
        if (numbers[i] == query)
        {
            position = i;
        }
    }
    
    if (position != -1)
    {
        cout << query << " is at position " << position << "." << endl;
    }
    else
    {
        cout << query << " is not in the array" << endl;
    }
    
    return 0;
}

string getIntArrayAsString(int array[], size_t length)
{
    string s;
    for (size_t i = 0; i < length; ++i)
    {
        s.append(to_string(array[i]));
        s.append(" ");
    }
    return s;
}