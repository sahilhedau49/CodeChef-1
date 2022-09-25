#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], i, j, count = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[i] ^ a[j]) < (a[i] | a[j]))
                    count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
