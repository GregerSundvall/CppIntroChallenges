#include <iostream>
#include <string>

using namespace std;


int main()
{
    string query;
    bool is_palindrome = true;

    cout << "Input a word and I'll tell you if it's a palindrome" << endl;
    cin >> query;

    for (int i = 0; i < query.length() / 2; ++i)
    {
        if (query[i] != query[query.length()-i -1])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        cout << query << " is a palindrome." << endl;
    }
    else
    {
        cout << query << " is NOT a palindrome." << endl;
    }

    return 0;
}
