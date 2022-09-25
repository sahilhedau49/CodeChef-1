#include <bits/stdc++.h>
using namespace std;

int find_one(string s, int n)
{
    int ans, i, j = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
            j++;
    }
    return j;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, r;
        cin >> n;
        cin >> s;
        cin >> r;

        int s_1, r_1;
        s_1 = find_one(s, n);
        r_1 = find_one(r, n);

        if (s_1 == r_1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
