/**
 *    created: 2021-03-18 16:20:51
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
/*---------------------------------PB_DS---------------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
// order_of_key(k) = the number of items in a set that are strictly smaller than k.
/*-----------------------------------------------------------------------*/
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sff(a, b) scanf("%d %d", &a, &b)
#define sffl(a, b) scanf("%lld %lld", &a, &b)
#define sfff(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define sffff(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sffffl(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define sfffff(a, b, c, d, e) scanf("%d %d %d %d %d", &a, &b, &c, &d, &e)
#define sfffffl(a, b, c, d, e) scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e)
#define sfc(a) scanf("%c", &a)
#define pb push_back
#define X first
#define Y second
#define sz(x) x.size()
#define fr(i, x, n) for (int i = x; i <= n; i++)
#define rfr(i, x, n) for (int i = x; i >= n; i--)
template <typename T>
inline void read(T &x)
{
    T f = 1;
    char c;
    x = 0;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())
        if (c == '-')
            f = -1;
    for (; c >= '0' && c <= '9'; c = getchar())
        x = x * 10 + c - '0';
    x *= f;
}
using fl = float;
using db = double;
using ll = long long;
using ull = unsigned long long;
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
using namespace std;
int nCr(int n, int r)
{
    if (!r)
        return 1;
    return (nCr(n - 1, r - 1) * n) / r;
}
int Pow(int a, int b, int mod = intlim)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (1ll * ans * a) % mod;
        b >>= 1;
        a = (1ll * a * a) % mod;
    }
    return ans;
}
int main()
{
    int t, z = 1;
    sf(t);
    while (t--)
    {
        int n, m;
        sff(n, m);
        printf("Case %d: ", z++);
        if (n > m)
            swap(n, m);
        int tw = (n >= 2) + (m >= 2), th = (n >= 3) + (m >= 3);
        if (n == 1)
            printf("%d\n", m);
        else if (n == 2)
            printf("%d\n", m + ((m & 1) ? 1 : (m % 4 == 0 ? 0 : 2)));
        else if (tw + th < 3)
            printf("0\n");
        else
        {
            int ans = ((m + 1) / 2) * ((n + 1) / 2) + (m / 2) * (n / 2);
            printf("%d\n", ans);
        }
    }
    return 0;
}
/* 
Case 1: 
/! * 0 * 0 0 0 0 0 
/! 0 * 0 * 0 0 0 0 
/! * 0 * 0 0 0 0 0 
/! 0 * 0 * 0 0 0 0 
/! * 0 * 0 0 0 0 0 
/! 0 * 0 * 0 0 0 0 
/! * 0 * 0 0 0 0 0 
/! 0 * 0 * 0 0 0 0
 */
/* 
Case 1: 
* 0 * 0 * 0 * 
0 * 0 * 0 * 0 
* 0 * 0 * 0 *
 */