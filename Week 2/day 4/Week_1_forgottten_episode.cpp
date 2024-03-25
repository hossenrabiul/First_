#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    long long Total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        Total += a[i];
    }
    long long ans = n * (n + 1) / 2;
    cout << ans - Total;
    return 0;
}