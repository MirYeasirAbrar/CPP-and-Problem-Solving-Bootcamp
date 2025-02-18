#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int p=1000;

    if(n>p)
    {
        cout << "I will buy Punjabi" << endl;
        n=n-p;
        if (n>=500)
        {
            cout << "I will buy new shoes" << endl;
            cout << "Alisa will buy new shoes" << endl;
        }
    }
    else
    {
        cout << "Bad luck!" << endl;
    }
    
    return 0;
}