#include <iostream>
using namespace std;



int main()
{
    int input;

    cout << "Even or odd" << endl;
    cout << "Input any integer:" << endl;
    cin >> input;

    string result = input % 2 == 0 ? "even" : "odd";

    cout << input << " is an " << result << " number" << endl;
    
    return 0;
}
