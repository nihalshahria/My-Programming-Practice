#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto x : str)
        mp[x]++;
    int a[10] = {};
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i + 1];
    }
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (mp[str[i]] == a[str[i] - '0'])
        {
            mp[str[i]]--;
            a[str[i] - '0']--;
            continue;
        }
        while (!st.empty())
        {
            if (str[i] <= st.top() || !a[st.top() - '0'])
                break;
            a[st.top()]--;
            st.pop();
            continue;
        }
        st.push(str[i]);
        mp[str[i]]--;
    }
    vector<char> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        /* code */
    }
}