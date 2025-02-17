#include <iostream>
int main()
{
    // int -- 4 byte -> 2^32 : 4294967295 or 10^9 
    // long long int -- 8 byte -> 2^64 / 10^18
    // float -- 4 byte
    // double -- 8 byte
    // char -- 1 byte

    int y = 1000000000;
    std::cout << sizeof(int) << '\n';
    std::cout << y << '\n';

    long long int x = 1000000000000000;
    std::cout << sizeof(long long int) << '\n';
    std::cout << x << '\n';

    float z = 3.56;
    std::cout << sizeof(float) << '\n';
    std::cout << z << '\n';

    double f = 10.123456;
    std::cout << sizeof(double) << '\n';
    std::cout << f << '\n';

    char r = 'A';
    std::cout << sizeof(char) << '\n';
    std::cout << r << '\n';

    return 0;
}