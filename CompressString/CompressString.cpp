#include <iostream>
#include <string>

using namespace std;

string compress(string input);
string decompress(string input);

int main()
{
    string input;
    
    cout << "Input string to compress:" << endl;
    cin >> input;

    string compressed = compress(input);
    cout << "Compressed string is " << compressed << endl;

    string decompressed = decompress(compressed);
    cout << "Decompressed string is " << decompressed << endl;
    
    return 0;
}

string compress(string input)
{
    string output;

    char current;
    int count = 1;

    for (size_t i = 0; i < input.size(); ++i)
    {
        current = input.at(i);
        if (input[i+1] == current)
        {
            count++;
        }
        else
        {
            output += current;
            output += to_string(count);
            count = 1;
        }
    }

    return output;
}

string decompress(string input)
{
    string output;
    
    for (size_t i = 0; i < input.size(); i += 2)
    {
        int count = input[i+1] -'0';
        for (int j = 0; j < count; ++j)
        {
            output += input[i];
        }
    }
    
    return output;
}
