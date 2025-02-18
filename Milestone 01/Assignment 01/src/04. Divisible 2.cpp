#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    for (int i=21; i<=n; i++)
    {
        if((i%3==0) &&  (i%7==0))
        {
            cout << i << endl;
        }
    }
    return 0;
}