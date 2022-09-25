#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b[n];

        for (int i = 0; i < n; i++)
            b[i] = 0;

        int flag, j, g = 0;
        sort(a, a + n);

        for (int i = 0; i < n;)
        {
            flag = a[i];
            j = i;
            while (a[j] == flag)
            {
                b[g]++;
                j++;
            }
            g++;
            i = j;
        }

        int max_val = 0;

        for (int i = 0; i < n; i++)
            max_val = max(max_val, b[i]);

        cout << (n - max_val) << endl;
    }
    return 0;
}