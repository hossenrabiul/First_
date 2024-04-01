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
    map<int,int> mp;
    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
        {
            ans += r - l + 1;
            r++;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                // if (mp[a[l]] == 0)
                // {
                //     mp.erase(a[l]);
                // }
                mp.erase(a[l]);
                l++;
            }
            if (mp.size() <= k)
            {
                ans += r - l + 1;
                r++;
            }
        }
    }
    cout << ans;
    return 0;
}