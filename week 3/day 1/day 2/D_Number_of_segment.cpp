
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum >= k)
        {
            ans += n-r;
            sum -= a[l];
            l++;
        }

        r++;
    }
    cout << ans;
    return 0;
}