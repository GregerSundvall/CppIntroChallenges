#include <iostream>

using namespace std;

// TODO: finish recursive version

int main()
{
    int iterationsToDo = 10;
    cout<<"How many iterations of The Fibonacci sequence do you need?"<<endl;
    cin>>iterationsToDo;
    cout<<"OK, here you go:"<<endl;
    
    int interation = 2;
    int preceding = 0;
    int current = 1;

    cout << preceding<< " " << current;
    
    do
    {
        int temp = current;
        current = preceding + current;
        preceding = current - preceding;

        cout << " " << current;
        interation++;
    }
    while (interation < iterationsToDo);
    
    return 0;
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