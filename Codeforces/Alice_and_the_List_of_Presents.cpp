/**
 *    created: 21.10.2021 18:52:18
**/
#include <bits/stdc++.h>
using namespace std;
/*---------------------------------PB_DS---------------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
// order_of_key(k) = the number of items in a set that are strictly smaller than k.
/*-----------------------------------------------------------------------*/
#define nl                  "\n"
#define X                   first
#define Y                   second
#define str_to_int(x)       stoi(x)
#define sz(x)               x.size()
#define pb                  push_back
#define all(v)              v.begin(),v.end()
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL)
using db = double;
using ll = long long;
using ull = unsigned long long;
/*---------------------------------Debugger---------------------------------*/
void __print(ll x) {cerr << x;}
void __print(db x) {cerr << x;}
void __print(int x) {cerr << x;}
void __print(ull x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr <<__func__<<":"<<__LINE__<< " [" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*--------------------------------------------------------------------------*/
const int mx = 1000005;
const int inf = 0x3f3f3f3f;
const int intlim = 0x7fffffff;
const db PI = acos(-1); //3.14159265358979323846264338328
/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
//#ifndef ONLINE_JUDGE
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//#endif
int nCr(int n, int r){
    if(!r)return 1;
    return (nCr(n-1, r-1)*n)/r;
}
int Pow(int a, int b, int mod = intlim){
    int ans = 1;
    while(b){
        if(b & 1)ans = (1ll * ans * a) % mod;
        b>>=1;
        a = (1ll * a * a) % mod;
    }
    return ans;
}
void solve(){
    int a, b;
    cin>>a>>b;
    int ans = Pow(2,b,1e9+7)-1;
    ans = Pow(ans,a,1e9+7);
    cout<<ans<<nl;
}
int main(){
    fast();
    int t = 1;
    // cin>>t;
    for(int i = 1; i<=t; ++i){
        solve();
    }
    return 0;
}