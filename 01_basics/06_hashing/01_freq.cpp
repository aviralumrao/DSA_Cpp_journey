// Given an array, we have found the number of occurrences of each element in the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "intput size = ";
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    cout << "input array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // printing frequency
    cout << "Frequency" << endl;
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
}