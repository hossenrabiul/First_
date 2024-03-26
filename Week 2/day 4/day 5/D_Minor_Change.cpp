#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    set<char> s1;
    for (char i = 0; i < s.size(); i++)
    {
        s1.insert(s[i]);
    }
    cout << s.size() - s1.size();

    return 0;
}