#include <bits/stdc++.h>
using namespace std;
// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083
// Difficulty: 1/5

int main()
{
    long long n, s = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        s += a;
    }
    cout << n * (n + 1) / 2 - s;
}