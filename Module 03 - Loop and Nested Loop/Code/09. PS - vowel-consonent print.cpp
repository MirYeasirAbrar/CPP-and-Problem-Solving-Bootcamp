#include <iostream>
using namespace std;

int main()
{

    char ch = 'a';
    while(ch <= 'z')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            cout << ch << " - vowel\n";
        else
            cout << ch << " - consonent\n";
        ch++;
    }

    return 0;
}