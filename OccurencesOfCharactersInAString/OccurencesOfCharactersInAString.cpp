#include <iostream>
#include <map>

using namespace std;


int main()
{
    string input;

    cout << "Input any string of characters" << endl;
    cin >> input;


    map<char, int> occurences;

    for (char c: input)
    {
        toupper(c);
        occurences[c] += 1;
    }

    cout << "This is how many times each character occurs in your input:" << endl;
    for (auto row : occurences)
    {
        cout << row.first << " " << row.second << endl;
    }
    
    return 0;
}
