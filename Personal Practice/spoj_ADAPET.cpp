/**
 *    created: 21.01.2021 12:09:14
**/
/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void computeLPS(string &pat, int &l2, std::vector<int>& v) {
    for (int i = 1; i < l2; i++) {
        int j = v[i-1];
        while(j>0 && pat[i]!=pat[j])j = v[j-1];
        if(pat[i]==pat[j])j++;
        v[i] = j;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        ll n;
        string str;
        cin >> str;
        cin>>n;
        int l = str.size();
        std::vector<int> v(l,0);
        computeLPS(str, l, v);
        printf("%lld\n", (ll)(l)+(l-v[l-1])*(n-1));
    }
    return 0;
}