// Pattern - 19: Symmetric-Void Pattern
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int i, j, k;
    char ch;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << '*';
        }
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << '*';
        }
        if(i==n) break;
        cout << endl;
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << '*';
        }
        for (j = 1; j < n-i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << '*';
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

/*
OUTPUT
Input an Integer N = 5
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/