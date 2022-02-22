#include <iostream>

using namespace std;



void fibonacciNumbers()
{
    int iterationsToDo = 10;
    int interation = 2;
    
    int preceding = 0;
    int current = 1;

    cout << preceding << endl;
    cout << current << endl;
    
    do
    {
        int temp = current;
        current = preceding + current;
        preceding = current - preceding;

        cout << current << endl;
        interation++;
    }
    while (interation < iterationsToDo);
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

void fibonacciNumbersRecursively()
{
    cout << fib(10) << endl;
    
}
