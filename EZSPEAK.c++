#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                count++;
            else
                count = 0;

            if (count == 4)
                break;
        }

        if (count == 4)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
