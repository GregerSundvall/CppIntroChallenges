#include <iostream>

using namespace std;

int retrieveBit(int& from, int position);
void setBit(int& target, int position);

int main()
{
    int number;
    int position;
    
    cout << "Input a number" << endl;
    cin >> number;

    cout << "Which bit do you want?" << endl;
    cin >> position;
    cout << "OK, the bit is a " << retrieveBit(number, position) << endl;

    cout << "Now youre gonna set a bit in the same number" << endl;
    cout << "Which bit do you wanna set?" << endl;
    cin >> position;
    
    setBit(number, position);
    cout << "Unless the bit was already set the number has now changed to " << number << endl;
    
    return 0;
}

int retrieveBit(int& from, int position)
{
    int mask = 1 << position;
    int masked = from & mask;
    return  masked >> position;
}

void setBit(int& target, int position)
{
    int mask = 1 << position;
    target = mask | target;
}