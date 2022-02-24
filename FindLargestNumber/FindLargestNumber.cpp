
#include <iostream>
#include <string>

using namespace std;

template<typename T>
T findLargest(T value1, T value2)
{
    if (value1 > value2)
        return value1;
    return value2;
}

int main()
{
    int firstInt;
    int secondInt;

    cout << "Input first INTEGER:" << std::endl;
    cin >> firstInt;
    cout << "Input second INTEGER:" << std::endl;
    cin >> secondInt;

    cout << "The largest int is " << findLargest(firstInt, secondInt) << endl;

    float firstFloat;
    float secondFloat;

    cout << "Input first FLOAT:" << std::endl;
    cin >> firstFloat;
    cout << "Input second FLOAT:" << std::endl;
    cin >> secondFloat;

    cout << "The largest float is " << findLargest(firstFloat, secondFloat) << endl;
    
    return 0;
}
