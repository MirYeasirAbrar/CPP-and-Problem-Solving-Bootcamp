#include <iostream>
using namespace std;

int main() {

    int space, rows;
    int n; cin >> n;

    rows = 5;
    for(int i = 1; i<=n ; i=i+2)
    {
        rows++;
    }

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<" ";
        }

        while(k != 2*i-1) {
            cout << "*";
            ++k;
        }
        cout << endl;
    }    

    for(int row = 1; row <= 5; row++){
        for(int col=1; col<=5; col++){
            cout << " ";
        }

        for(int col=1; col<=n; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
