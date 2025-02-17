#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter a integer : ";
    cin >> a >> b >> c;
    if(a>=b && a>=c)
    {
        cout << a << " max\n";
    }
    else if(b>=a && b>=c)
    {
        cout << b << " max\n";
    }
    else
    {
        cout << c << " max\n";
    }
}