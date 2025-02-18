#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;

    int a[n], even=0, odd=0;
    for( int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even = even + a[i];
        }
        else{
            odd = odd + a[i];
        }
    }
    cout << even << " " << odd << endl;
}