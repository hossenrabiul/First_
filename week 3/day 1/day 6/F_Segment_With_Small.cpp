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
    int l = 0, r = 0, ans = 0;
    multiset<int> mul;
    while (r < n)
    {
        mul.insert(a[r]);
        int mn, mx;
        mn = *mul.begin(), mx = *mul.rbegin();

        if ((mx - mn) <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r)
            {
                mn = *mul.begin(), mx = *mul.rbegin();

                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = mul.find(a[l]);
                mul.erase(it);

                l++;
                // mn = *mul.begin(), mx = *mul.rbegin();

                if ((mx - mn) <= k)
                {
                    ans += r - l + 1;
                }
            }
        }
        r++;
    }
    cout << ans;
    return 0;
}