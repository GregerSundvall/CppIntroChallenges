#include <iostream>
#include <string>

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


void fibonacciNumbersRecursively()
{
    
}
