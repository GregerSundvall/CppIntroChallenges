#include <iostream>

using namespace std;


template<typename T>
void tSwap(T& value1, T& value2)
{
    value1 += value2;
    value2 = value1 - value2;
    value1 -= value2;
}

int main()
{
    int int1;
    int int2;
    float float1;
    float float2;
    
    cout << "Input first INT" << endl;
    cin >> int1;
    cout << "Input second INT" << endl;
    cin >> int2;

    cout << "Values are " << int1 << " and " << int2 << endl;
    tSwap(int1, int2);
    cout << "Ints are swapped to " << int1 << " and " << int2 << endl;

    cout << "Input first FLOAT" << endl;
    cin >> float1;
    cout << "Input second FLOAT" << endl;
    cin >> float2;

    cout << "Values are " << float1 << " and " << float2 << endl;
    tSwap(float1, float2);
    cout << "Floats are swapped to " << float1 << " and " << float2 << endl;
    
    
    return 0;
}
