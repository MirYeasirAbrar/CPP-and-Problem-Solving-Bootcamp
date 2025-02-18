#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;

    for(int row=1; row<=n; row++)
    {
        for (int space=n; space > row; space--)
        {
            cout << " ";
        }

        for (int col=row; col>=1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}