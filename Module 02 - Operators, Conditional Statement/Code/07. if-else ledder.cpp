#include <iostream>
using namespace std;
int main()
{
    int tk = 200;

    if(tk >= 200)
    {
        cout << "Burger";
    }
    else if (tk >= 100)
    {
        cout << "Waffel";
    }
    else if (tk >= 50)
    {
        cout << "Chips";
    }
    else
    {
        cout << "Nothing";
    }
    
    return 0;
}