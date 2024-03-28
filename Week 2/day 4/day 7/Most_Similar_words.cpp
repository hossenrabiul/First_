#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            for (int x = 0; x < k; x++)
            {
                sum += abs(s[i][x] - s[j][x]);
            }
            ans = min(ans, sum);
        }
    }
    cout << ans;

    return 0;
}