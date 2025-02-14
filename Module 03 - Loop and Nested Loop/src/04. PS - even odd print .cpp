#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element - ";
    cin >> n; 
    for (int i=1; i<=n; i++)
    {
        if(i%2 == 0)
            cout << i << " - even\n";
        else
            cout << i << " - odd\n";    
        
    }
    return 0;
}