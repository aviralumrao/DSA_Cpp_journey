// Pattern - 17: Alpha-Hill Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i,j,k;
    char ch;
    for (i = 1; i <= n; i++)
    {
        ch ='A';
        for (j = 1; j <= n - i; j++){
            cout << " ";
        }
        for (j = 1; j <= i; j++){
            cout << ch++;
        }
        ch--;
        for (j = 1; j < i; j++){
            cout << --ch;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Input an Integer N = ";
    cin >> t;
    print(t);
    return 0;
}

/*OUTPUT
Input an Integer N = 6
A
BB
CCC
DDDD
EEEEE
FFFFFF
*/
