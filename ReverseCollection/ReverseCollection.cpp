
#include <string>
#include <iostream>

using namespace std;


int main()
{
    string input;
    string reversed;

    cout << "Input any string and get it reversed" << endl;
    cin >> input;

    for (int i = input.length() - 1; i >= 0; --i)
    {
        reversed.append(input, i, 1);
    }

    cout << input << " reversed is " << reversed << "." << endl;
    
    return 0;
}
