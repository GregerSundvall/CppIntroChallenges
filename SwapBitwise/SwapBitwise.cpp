#include <iostream>

using namespace std;


int main()
{
    
    int x;
    int y;
    
    std::cout << "Input first number:" << std::endl;
    std::cin >> x;
    std::cout << "Input second number:" << std::endl;
    std::cin >> y;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    cout << "swapped bitwise: " << x << " " << y << endl;

    x ^= y;
    y ^= x;
    x ^= y;

    cout << "swapped again, bitwise with shorter syntax: " << x << " " << y << endl;
    
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "swapped again, using math only: " << x << " " << y << endl;
    cout << "No temps were harmed during the production of this result" << endl;
    
    return 0;
}
