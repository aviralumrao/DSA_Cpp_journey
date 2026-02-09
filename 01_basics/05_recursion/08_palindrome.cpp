// Given a string, check if the string is palindrome or not.A string is said to be palindrome if the reverse of the string is the same as the string
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool palindrome(int n, string str)
{
    int l = str.size();
    if (str[n] == str[l - n - 1])
    {
        if (n == l / 2)
            return true;
        palindrome(n + 1, str);
    }
    else
    {
        return false;
    }
}

int main()
{
    string txt;
    cout << "Input the String : ";
    cin >> txt;

    if (palindrome(0, txt))
        cout << txt << " is palindrome";
    else
        cout << txt << " is not palindrome";
    return 0;
}