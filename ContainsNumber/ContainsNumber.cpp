#include <iostream>
#include <string>

using namespace std;



int main(int argc, char* argv[])
{
    int number;
    cout<<"Give me a number:"<<endl;
    cin>>number;
    
    char query;
    cout<<"What should I search for?"<<endl;
    cin>>query;
    
    bool doesContain = false;
    string numberString = std::to_string(number);

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
    
    return 0;
}
