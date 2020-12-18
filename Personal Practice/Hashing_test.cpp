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
#define pf                  printf
#define sf(a)               scanf("%d",&a)
#define pb(a)               push_back(a)
#define ll                  long long
#define sz(x)               x.size()
#define clr(x)              x.clear()
#define PI                  acos(-1) //3.14159265358979323846264338328
using namespace std;
std::vector<ll> v, fac;
ll hashing(string s) {
    ll power = 1, value = 0;
    for (auto x : s)value += x * power, power *= 31;
    return value;
}
int main() {
    int t, z = 1, c;
    sf(t);
    getchar();
    while (t--) {
        v.clear();
        fac.clear();
        string str, s2;
        getline(cin, str);
        fac.pb(1);
        for (auto x : str) {
            if(x==' ')v.pb(hashing(s2)),s2="", fac.pb(fac[sz(fac)-1]*sz(fac));
            else s2+=x;
        }
        v.pb(hashing(s2)), fac.pb(fac[sz(fac)-1]*sz(fac));
        sort(v.begin(), v.end());
        ll ans = fac[fac.size()-1];
        c=1;
        for (int i = 1; i < v.size(); ++i){
            if(v[i]!=v[i-1])ans/=fac[c],c=1;
            else c++;
        }
        ans/=fac[c];
        cout<<"Case "<<z++<<": 1/"<<ans<<endl;
        // int n;
        // sf(n);
        // getchar();
        // while (n--) {
        //     string s;
        //     cin >> s;
        //     ll x = hashing(s);
        //     cout << (upper_bound(v.begin(), v.end(), x) - v.begin()) - (lower_bound(v.begin(), v.end(), x) - v.begin()) << endl;
        // }
    }
    return 0;
}
