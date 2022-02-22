#include <iostream>

using namespace std;


void permute(string input, int firstIndex, int lastIndex);

void permutations()
{
    string input = "alvedon";
    permute(input, 0, input.size() -1);
    
    
}


void permute(string input, int firstIndex, int lastIndex)
{
    if (firstIndex == lastIndex)
    {
        cout << input << endl;
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
