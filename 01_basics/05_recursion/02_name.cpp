//Given an integer N, write a program to print your name N times.
#include <bits/stdc++.h>
using namespace std;
void printName(int n)
{
    if (n == 0)
        return;
    cout << "Aviral" << "\t";
    printName(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printName(n);
    return 0;
}

/*OUTPUT
Enter a number: 5
Aviral  Aviral  Aviral  Aviral  Aviral
*/