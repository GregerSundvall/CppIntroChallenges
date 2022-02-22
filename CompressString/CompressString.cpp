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

    char current = input.at(0);
    int count = 1;

    for (size_t i = 0; i < input.size(); ++i)
    {
        if (input[i] != current)
        {
            output += current;
            output += std::to_string(count);

            current = input[i];
            count = 1;
        }
        else
        {
            count++;
        }
    }

    return output;
}

string decompress(string input)
{
    string output;

    for (size_t i = 0; i < input.size(); i + 2)
    {
        int count = input[i+1];
        for (int i = 1; i <= count; ++i)
        {
            output += input[i];
        }
    }
    
    return output;
}
