#include <iostream>
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    for (int i=1; i<=k; i++){
        for (int i=1; i<=n; i++){
            cout << i << ' ';
        }
        cout << "\n";
    }
    return 0;
}