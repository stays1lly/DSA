#include <bits/stdc++.h>
using namespace std;

// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Difficulty: 1/5

int main()
{
    long long n;
    cin >> n;
    cout << n;
    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;

        else
            n = 3 * n + 1;
        cout << " " << n;
    }
}