#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, s, i, j;
        cin >> n >> x >> s;

        long long int arr[s][2], flag = 0;
        for (i = 0; i < s; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (i = 0; i < s; i++)
        {
            long long int temp = x;
            if (arr[i][0] == temp)
            {
                x = arr[i][1];
            }

            if (arr[i][1] == temp)
            {
                x = arr[i][0];
            }
        }

        cout << x << endl;
    }
    return 0;
}