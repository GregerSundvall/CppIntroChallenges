#include <iostream>

using namespace std;


void permute(string& input, int firstIndex, int lastIndex);

int main()
{
    string input;

    cout << "Input a word and I'll give you all permutations of this" << endl;
    cin >> input;

    cout << "Hold on tight, here it is:" << endl;
    permute(input, 0, input.size() -1);
    
    return 0;
}

void permute(string& input, int firstIndex, int lastIndex)
{
    if (firstIndex == lastIndex)
    {
        cout << input << " ";
    }
    else
    {
        for (int i = firstIndex; i <= lastIndex; i++)
        {
            swap(input[firstIndex], input[i]);
            permute(input, firstIndex + 1, lastIndex);
            swap(input[firstIndex], input[i]);
        }
    }
    
}