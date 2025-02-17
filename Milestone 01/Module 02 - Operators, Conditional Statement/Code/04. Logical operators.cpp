// &&, ||, ! --- uses between 2 relational statement 
#include <iostream>
using namespace std;
int main()
{
    int a, b = (5 > 3), c = (5 < 3);
    a = b && c;
    cout << a <<'\n';
    a = b || c;
    cout << a <<'\n';
    a = !c;
    cout << a <<'\n';

    return 0;
}