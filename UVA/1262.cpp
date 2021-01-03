/**
 *    author:  nihalshahria
 *    created: 23.12.2020 19:34:38
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
int nCr(int n, int r) {
    if (!r)return 1;
    return (nCr(n - 1, r - 1) * n) / r;
}
int Pow(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1)ans = (ans * a);
        b >>= 1;
        a = (a * a);
    }
    return ans;
}
int main() {
    int t;
    sf(t);
    while (t--) {
        int k;
        sf(k);
        set<char>s1[5], s2[5], s3[5];
        getchar();
        for (int i = 0; i < 6; ++i){
            for (int ii = 0; ii < 5; ++ii){
                char c;
                sfc(c);
                s1[ii].insert(c);
            }
            getchar();
        }
        for (int i = 0; i < 6; ++i){
            for (int ii = 0; ii < 5; ++ii){
                char c;
                sfc(c);
                s2[ii].insert(c);
            }
            getchar();
        }
        int n = 1;
        for (int i = 0; i < 5; ++i){
            cout << i + 1 << " ";
            for (auto x : s1[i]) {
                for (auto y : s2[i]) {
                    if (x == y) {
                        s3[i].insert(x);
                        cout << x;
                        break;
                    }
                }

            }
            printf("\n");
            n = n * sz(s3[i]);
        }
        cout << n << endl;
        if (n < k)printf("NO\n");
        else {
            stack<char>s4;
            int c = 1;
            for (int i = 4; i >= 0 ; --i){
                int f = k % sz(s3[i]);
                if (!f)f = sz(s3[i]);
                int f2 = 0;
                if (c < k) {
                    for (auto x : s3[i]) {
                        f2++;
                        if (f2 == f) {
                            s4.push(x);
                            break;
                        }
                    }
                    c *= sz(s3[i]);
                }
                else s4.push(*s3[i].begin());
            }
            while (!s4.empty()) {
                cout << s4.top();
                s4.pop();
            }
            printf("\n");
        }
    }
    return 0;
}
