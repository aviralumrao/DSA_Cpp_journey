// Given an integer N. Print the Fibonacci series up to the Nth term.
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int a, int b,int c,int n)
{
    if(c>n)
        return;
    cout << a << "\t";
    fibonacci(b,a+b,c+1,n);

}

int main()
{
    int num;
    cout << "Input the number : ";
    cin >> num;
    fibonacci(0,1,0, num);
}
