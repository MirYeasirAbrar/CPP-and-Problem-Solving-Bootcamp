#include <iostream>
using namespace std;

int main()
{
    int n, a, b; cin >> n;

    int c1=0, c2=0;

    while(n--){
        cin >> a >> b;
        if(a>b){
            c1++;
        }
        else if(b>a){
            c2++;
        }
    }

    if(c1==c2){
        cout << "Draw" << endl;
    }
    else if (c1>c2){
        cout << "Tiger" << endl;
    }
    else{
        cout << "Pathan" << endl;
    }

    return 0;
}