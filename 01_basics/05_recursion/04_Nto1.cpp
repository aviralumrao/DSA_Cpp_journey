// Given an integer N, write a program to print numbers from N to 1 using recursion.
#include <bits/stdc++.h>
using namespace std;

void printN(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printN(n - 1);
}

int main()
{
    int N;
    cout << "Input a nunber :";
    cin >> N;
    printN(N);
    return 0;
}