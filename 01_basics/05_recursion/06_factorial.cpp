// Given an integer N, write a program to print factorial of N using recursion.
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1)
    return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int N;
    cout << "Input a nunber :";
    cin >> N;
    cout << "Factorial = " << fact(N);
    return 0;
}

/*OUTPUT
Input a nunber :6
Factorial = 720
*/