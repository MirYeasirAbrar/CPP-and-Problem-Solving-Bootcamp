// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n==0)
        {
            cout << 0;
        }

        else
        {
        int r;
        while(n != 0)
        {
            r = n%10;
            cout << r << " " ;
            n = n/10;
        }
        cout << endl;
        }
    }
    return 0;
}