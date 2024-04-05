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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        int sum = n - s.size();
        if (sum % 2 == 0)
        {
            cout << s.size() << endl;
        }
        else
        {
            cout << s.size() - 1 << endl;
        }
    }
    return 0;
}