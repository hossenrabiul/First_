#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    queue<int> q;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != x)
        {
            ans++;
            q.push(a[i]);
        }
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}