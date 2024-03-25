#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int mx = 0;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] > i)
            {
                flag = true;
                mx = max(mx, v[i] - i);
            }
        }
        if (flag == false)
        {
            cout << 0 << endl;
        }
        else
        {

            cout << mx << endl;
        }
    }
    return 0;
}