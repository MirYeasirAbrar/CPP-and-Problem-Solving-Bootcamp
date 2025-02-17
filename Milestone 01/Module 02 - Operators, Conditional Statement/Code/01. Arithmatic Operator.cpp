#include <iostream>

int main()
{
    // Arithmetic operation -> | + | - | * | / | % |
    int a = 40, b = 30;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    float div = a/b;
    int mod = a%b;
    std::cout << sum << "  " << sub << "  " << mul << "  " << div << "  " << mod << '\n';   
    return 0;
}