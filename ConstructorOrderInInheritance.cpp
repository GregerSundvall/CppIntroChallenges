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
        cout << "ClassA destructor run" << endl;
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
        cout << "ClassA destructor run" << endl;
    }
};



void constructorOrderInInheritance()
{
    auto a = new classC;
    delete a;
    auto b = new classC;
    delete b;
    auto c = new classC;
    delete c;
}
