// <,>,<=,>=,==,!=  : true/false --- uses between 2 values 
#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 5 > 3;
    cout << a <<'\n';
    a = 5 < 3;
    cout << a <<'\n';
    a = 5 >= 3;
    cout << a <<'\n';
    a = 5 <= 3;
    cout << a <<'\n';
    a = (5 == 3);
    cout << a <<'\n';
    a = (5 != 3);
    cout << a <<'\n';
    return 0;
}