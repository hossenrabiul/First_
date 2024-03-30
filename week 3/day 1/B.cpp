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
    int l = 0, r = 0, ans = INT_MAX, sum = 0;
    bool flag = true;
    while (r < n)
    {
        sum += a[r];
        while (sum >= k)
        {
            flag = false;
            ans = min(ans, (r - l + 1));
            sum -= a[l];
            l++;
        }
        r++;
    }
    if (flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans;
    }
    return 0;
}