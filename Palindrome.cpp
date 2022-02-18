#include <algorithm>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;


void palindrome()
{
    string query;
    int q_length;
    bool is_palindrome = true;

    cout << "Palindrome" << endl;
    cout << "Input a word and I'll tell you if it's a palindrome" << endl;

    cin >> query;
    q_length = size(query);

    for (int i = 0; i < q_length / 2; ++i)
    {
        if (query.at(i) != query.at(q_length) -1)
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




    cout << "Press Enter to exit" << endl;
    _getch();
}
