#include <iostream>

using namespace std;


class classA
{
    int a = 0;
public:
    classA()
    {
        cout << "ClassA constructor run" << endl;
    }
    ~classA()
    {
        cout << "ClassA destructor run" << endl;
    }
};

class classB : classA
{
    int a = 0;
    int b = 0;
public:
    classB()
    {
        cout << "ClassB constructor run" << endl;
    }
    ~classB()
    {
        cout << "ClassB destructor run" << endl;
    }
};

class classC : classB
{
    int a = 0;
    int b = 0;
    int c = 0;
public:
    classC()
    {
        cout << "ClassC constructor run" << endl;
    }
    ~classC()
    {
        cout << "ClassC destructor run" << endl;
    }
};



int main()
{
    auto a = new classA;
    delete a;
    auto b = new classB;
    delete b;
    auto c = new classC;
    delete c;
    
    return 0;
}
