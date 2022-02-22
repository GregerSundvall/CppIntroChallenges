#include <iostream>

using namespace std;


void linearSearchWord()
{
    string input = "hello world";
    string query = "world";
    
    
    size_t result = input.find(query);
    if (result == 0)
    {
        cout << query << " is not in the sentence." << endl;
    }
    else
    {
        cout << query << " is at character " << result << " in the sentence." << endl;
    }

    
}
