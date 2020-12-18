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
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define sfc(a)              scanf("%c",&a)
#define pb(a)               push_back(a)
#define db                  double
#define fl                  float
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define pii                 pair<int,int>
#define pli                 pair<long long int,int>
#define pis                 pair<int,string>
#define psi                 pair<string,int>
#define mp(a,b)             make_pair(a,b)
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define PI                  acos(-1) //3.14159265358979323846264338328
#define intlim              2147483648
#define MAX                 1000000
#define inf                 99999999
#define mx                  100005

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;
#define mid ((b+e)/2)
const int sz = 200005;
//ll seg[sz * 4];
ll lazy[sz * 4];
ll arr[sz];
void propagate(int node, int b, int e) {
    if (b != e) {
        lazy[node * 2] = lazy[node];
        lazy[node * 2 + 1] = lazy[node];
        lazy[node] = 0;
    }
}
void update(int node, int b, int e, int l, int r, ll val) {
    if (lazy[node])propagate(node, b, e);
    if (b > r || e < l) return;
    if (b >= l && e <= r) {
        lazy[node] = val;
        propagate(node, b, e);
        return;
    }
    update(node * 2, b, mid, l, r, val);
    update(node * 2 + 1, mid + 1, e, l, r, val);
}
void build(int node, int b, int e, int val) {
    if (lazy[node])if (!val)val = lazy[node];
    if (b == e) {
        arr[val] = 1;
        return;
    }
    build(node * 2, b, mid, val);
    build(node * 2 + 1, mid + 1, e, val);
}
int main() {
    int t, z = 1;
    sf(t);
    while (t--) {
        int n, q, l, r, pos = 0;
        sf(n);
        memset(arr, 0, sizeof(arr));
        memset(lazy, 0, sizeof(lazy));
        for (int i = 1; i <= n; ++i) {
            sff(l, r),update(1, 1, 2 * n, l, r, i);
        }
        build(1, 1, 2 * n, 0);
        for (int i = 1; i <= 2 * n; ++i)if (arr[i])pos++;
        printf("Case %d: %d\n", z++, pos);
    }
}

