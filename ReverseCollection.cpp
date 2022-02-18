
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;


void reverse_collection()
{
    string source = "Hello";
    string reversed = "";

    for (int i = 0; i < size(source); ++i)
    {
        reversed.append(to_string(source.at(i)));
    }

    cout << source << " reversed is " << reversed << "." << endl;



    cout << "Press Enter to exit" << endl;
    _getch();
}
