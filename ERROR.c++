#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.size(), count = 0;

        for (int i = 0; i < l; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
                count++;
        }
        if (count == 0)
            cout << "Bad\n";
        else
            cout << "Good\n";
    }
    return 0;
}