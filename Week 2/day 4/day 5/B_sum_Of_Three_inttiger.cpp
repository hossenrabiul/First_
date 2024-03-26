#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int ans = 0;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            int sum = s - i - j;
            if (sum >= 0 && sum <= n)
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}