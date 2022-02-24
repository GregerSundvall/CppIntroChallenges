#include <iostream>

using namespace std;


int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    int biggest = numbers[0];
    int smallest = numbers[0];
    int average = 0;

    for (size_t i = 0; i < size(numbers); ++i)
    {
        sum += i;
        if (i > biggest) { biggest = numbers[i];}
        if (i < smallest) { smallest = numbers[i];}
    }

    average = sum / size(numbers);

    cout << "Numbers are ";
    for (auto number : numbers)
    {
        cout<<number<<" ";
    }
    cout << endl;
    
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << biggest << endl;
    cout << "Average " << average << endl;
    return 0;
}
