#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    long long ans = 0;
    long long mx = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
        if (a[i] < mx)
        {
            mx = a[i];
        }
    }
    if (ans % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if ((ans - a[i]) / 2 == 0)
            {
                cout << ans - a[i] << endl;
                break;
            }
        }
    }
    return 0;
}