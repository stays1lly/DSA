#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char current;
    int count = 0;
    int answer = 0;

    int n = s.length();

    for (int i = 0; i <= n; i++)
    {
        if (s[i] != current)
        {
            current = s[i];
            count = 0;
        }

        if (s[i] == current)
        {
            count++;
        }

        answer = max(answer, count);
    }
    cout << answer;
}
