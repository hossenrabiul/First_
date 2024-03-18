#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<bool> v(26, false);
    bool flag = true;
    char ans;
    for (char s1 : s)
    {
        v[s1 - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == false)
        {
            ans = i + 'a';
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "NONE" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}