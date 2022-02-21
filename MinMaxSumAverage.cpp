
#include <iostream>

using namespace std;

void minMaxSumAverage()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9};

    int sum = 0;
    int biggest = numbers[0];
    int smallest = numbers[0];
    int average;

    for (size_t i = 0; i < size(numbers); ++i)
    {
        sum += i;
        if (i > biggest) { biggest = i;}
        if (i < smallest) { smallest = i;}
    }

    average = sum / size(numbers);
    
}
