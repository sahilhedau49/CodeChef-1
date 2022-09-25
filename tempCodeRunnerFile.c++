#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int z = r + c - 1;
    int a[r][c];
    int b[z];
    int i, j, k, q = 0, sum, sum2, flag;

    for (i = 0; i < z; i++)
        b[i] = 0;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];

    for (k = 0; k < r; k++)
    {
        i = k;
        j = 0, sum = 0;
        flag = k + 1;
        while (flag--)
        {
            sum = a[i][j] + sum;
            i--;
            j++;
        }
        b[q] = sum;
        q++;
    }

    for (k = 1; k < c; k++)
    {
        i = r - 1;
        j = k, sum2 = 0;
        flag = i + 1 - k;
        while (flag--)
        {
            sum2 = a[i][j] + sum2;
            i--;
            j++;
        }

        b[q] = sum2;
        q++;
    }

    int max_d = 0;
    for (i = 0; i < z; i++)
    {
        max_d = max(b[i], max_d);
    }

    cout << max_d << endl;
}
