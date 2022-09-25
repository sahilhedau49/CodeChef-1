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

        reverse(a, a + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 1 && a[i] != 2 && a[i] != 3 && a[i] != 4 && a[i] != 5 && a[i] != 6 && a[i] != 7)
                count++;
            else
                break;
        }
        cout << (n - count) << endl;
    }
    return 0;
}
