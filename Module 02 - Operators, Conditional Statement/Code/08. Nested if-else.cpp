#include <iostream>
using namespace std;
int main()
{
    int tk = 1000;

    if(tk >= 200)
    {
        if (tk >= 500)
        {
            cout << "Burger + Pizza";
        }
        else
        {
            cout << "Burger";
        }
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