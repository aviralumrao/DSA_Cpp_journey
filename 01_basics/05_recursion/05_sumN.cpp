// Given an integer N, write a program to print sum of first N numbers.
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if (n==0)
    return 0;
    else 
    {
        return n + sum(n-1);
    }
}

int main()
{
    int N;
    cout << "Input a nunber :";
    cin >> N;
    cout << "Sum = " << sum(N);
    return 0;
}

/*OUTPUT
Input a nunber :6
Sum = 21
*/
