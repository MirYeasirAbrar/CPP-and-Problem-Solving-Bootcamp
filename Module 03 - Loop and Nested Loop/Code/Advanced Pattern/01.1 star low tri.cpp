#include <iostream>
using namespace std;

int main()
{
    int star = 5;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= star ; j++)
        {
            cout << "* " ;
        }
        cout << '\n';
        star --;
    }
        
    return 0;
}