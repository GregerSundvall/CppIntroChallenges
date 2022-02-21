#include <iostream>
#include <map>

using namespace std;


void occurencesOfCharactersInAString()
{
    string string = "hello";


    map<char, int> occurences;

    for (auto c: string)
    {
        std::toupper(c);
        occurences['C'] += 1;
    }

    for (auto row : occurences)
    {
        printf(row.first + " : " + row.second);
    }
    
}
