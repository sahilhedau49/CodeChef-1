#include <bits/stdc++.h>
using namespace std;

struct level
{
    string s;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        struct level l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i].s;
        }

        int cc = 0, sc = 0, ec = 0, emc = 0, mc = 0, mhc = 0, hc = 0;

        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "cakewalk")
                cc++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "simple")
                sc++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "easy")
                ec++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "easy-medium")
                emc++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "medium")
                mc++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "medium-hard")
                mhc++;
        }
        for (int i = 0; i < n; i++)
        {
            if (l[i].s == "hard")
                hc++;
        }

        if (cc != 0 && sc != 0 && ec != 0 && (emc != 0 || mc != 0) && (mhc != 0 || hc != 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
