
#include <iostream>
using namespace std;

// TODO non case sensitive. Shouldn't be using find?
int main()
{
    string input = "Hej jag heter Greger";
    string query = "Greger";
    
    int result = input.find(query);
    if (result == -1)
    {
        cout << query << " is not in the sentence." << endl;
    }
    else
    {
        cout << query << " starts at character " << result << " in the sentence." << endl;
    }
    
    return 0;
}
