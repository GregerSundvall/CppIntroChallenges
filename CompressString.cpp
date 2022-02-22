#include <iostream>
#include <map>

using namespace std;


void compressString()
{
    string input = "ddddooooooooddiffffjjjjj";
    string output;

    char current = input.at(0);
    int count = 1;

    for (size_t i = 0; i < input.size(); ++i)
    {
        if (input[i] != current)
        {
            output += current;
            output += count;

            current = input[i];
            count = 1;
        }
        else
        {
            count++;
        }
    }

    cout << input << endl;
    cout << output << endl;
}

void decompressString()
{
    string input = "j1k2h3g4";
    string output;

    for (size_t i = 0; i < input.size(); i + 2)
    {
        for (int count = 0; count < input[i+1]; ++count)
        {
            output += input[i];
        }
    }
    cout << input << endl;
    cout << output << endl;
}
