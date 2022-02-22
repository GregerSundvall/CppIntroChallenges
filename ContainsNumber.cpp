#include <iostream>

using namespace std;


void containsNumber()
{
    int number = 123123;
    int query = 5;
    bool doesContain = false;
    
    for (int digit : number)
    {
        if (digit == query)
        {
            doesContain = true;
            break;
        }
    }

    doesContain ? cout << number << " does contain the number " << query << endl :
                    cout << number << " does not contain the number " << query << endl;
    
}
