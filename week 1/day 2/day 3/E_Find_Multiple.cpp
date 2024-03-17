#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c * 2;
    if (ans >= a && ans <= b)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}