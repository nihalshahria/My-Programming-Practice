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
/*---------------------------------PB_DS---------------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
// order_of_key(k) = the number of items in a set that are strictly smaller than k.
/*-----------------------------------------------------------------------*/
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define MEM(a,b)            memset(a, (b), sizeof(a))
#define sfc(a)              scanf("%c",&a)
#define pb(a)               push_back(a)
#define X                   first
#define Y                   second
#define sz(x)               x.size()
#define pii                 pair<int,int>
#define pli                 pair<long long int,int>
#define mp(a,b)             make_pair(a,b)
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define rfr(i,x,n)          for(int i=x;i>n;i--)
#define LCM(a, b)           ((a)*((b)/GCD(a,b)))
template<typename T>T Abs(T a) {return (a < 0 ? -a : a);}
template<typename T>T MAX(T a, T b) {return (a > b ? a : b);}
template<typename T>T MIN(T a, T b) {return (a < b ? a : b);}
template<typename T>T GCD(T a, T b) {if (b == 0)return a; return GCD(b, a % b);}
template<typename T>inline void read(T &x) {
    T f = 1; char c; x = 0;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())if (c == '-')f = -1;
    for (; c >= '0' && c <= '9'; c = getchar())x = x * 10 + c - '0';
    x *= f;
}
using fl = float;
using db = double;
using ll = long long;
using ull = unsigned long long;
const int mx = 1000005;
const int inf = 99999999;
const int intlim = 2147483648;
const db PI = acos(-1); //3.14159265358979323846264338328
/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;
pii arr[10010];
std::vector<int > v[10010];
int vis[10010];
int ind, t;
void dfs1(int u) {
    vis[u] = 1;
    t++;
    for (int i = 0; i < sz(v[u]); ++i)
        if (!vis[v[u][i]])
            dfs1(v[u][i]);
    t++;
    arr[ind].X = u;
    arr[ind++].Y = t;
}
void dfs2(int u) {
    vis[u] = 1;
    for (int i = 0; i < sz(v[u]); ++i)
        if (!vis[v[u][i]])
            dfs2(v[u][i]);
}
bool cmp(pii a, pii b) {
    return a.Y > b.Y;
}
int main() {
    int tst, z = 1;
    sf(tst);
    while (tst--) {
        printf("Case %d: ", z++);
        int n, m;
        sff(n, m);
        for (int i = 0, a, b; i < m; ++i)
            sff(a, b), v[a].pb(b);
        MEM(vis, 0);
        ind = 0;
        t = 0;
        for (int i = 1; i <= n; ++i)
            if (!vis[i])
                dfs1(i);
        sort(arr, arr + ind, cmp);
        int ans = 0;
        MEM(vis, 0);
        for (int i = 0; i < ind; ++i)
            if (!vis[arr[i].X])
                ans++, dfs2(arr[i].X);
        printf("%d\n", ans);
        for (int i = 0; i < 10010; ++i)v[i].clear();
    }
    return 0;
}
