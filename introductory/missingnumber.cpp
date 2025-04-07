#include <bits/stdc++.h>
using namespace std;
// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083
// Difficulty: 1/5

int main()
{
    long long int n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << (n * (n + 1) / 2) - sum;
}
