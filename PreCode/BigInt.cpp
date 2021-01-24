/**
 *    author:  nihalshahria
 *    created: 24.01.2021 19:22:01
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
#define sfc(a)              scanf("%c",&a)
#define pb                  push_back
#define X                   first
#define Y                   second
#define sz(x)               x.size()
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define rfr(i,x,n)          for(int i=x;i>n;i--)
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
struct BigInt
{
    int a[100010];
    int len;
    BigInt() {
        memset(a, 0, sizeof(a));
        len = 0;
    }
    void print() {
        for (int i = len; i >= 1; --i)printf("%d", a[i]);
    }
    bool operator < (const BigInt &b) const {
        if (len != b.len)return len < b.len;
        for (int i = len; i > 0; --i) {
            if (a[i] != b.a[i])return a[i] < b.a[i];
        }
        return false;
    }
    bool operator > (const BigInt &b) const { return b < *this; }
    bool operator <= (const BigInt &b) const { return !(b < *this); }
    bool operator != (const BigInt &b) const { return (b < *this) || (b > *this); }
    bool operator == (const BigInt &b) const { return !(*this != b); }
    BigInt operator + (const BigInt &b) {
        BigInt rs;
        rs.len = max(len, b.len);
        for (int i = 1; i <= rs.len; i++) {
            rs.a[i] += (a[i] + b.a[i]);
            if (rs.a[i] > 10) {
                rs.a[i] %= 10;
                rs.a[i + 1]++;
            }
        }
        while (rs.a[rs.len + 1])rs.len++;
        if (rs.len == 0)rs.len = 1, rs.a[1] = 0;
        return rs;
    }
    BigInt operator - (const BigInt &b) {
        BigInt rs;
        rs.len = max(len, b.len);
        for (int i = 1; i <= rs.len; i++) {
            rs.a[i] += (a[i] - b.a[i]);
            if (rs.a[i] < 0) {
                rs.a[i] += 10;
                rs.a[i + 1]--;
            }
        }
        while (!rs.a[rs.len] && rs.len > 0)rs.len--;
        if (rs.len == 0)rs.len = 1, rs.a[1] = 0;
        return rs;
    }
    BigInt operator * (const BigInt &b) {
        BigInt rs;
        if ((b.len == 1 && b.a[1] == 0) || (len == 1 && a[1] == 0)) {
            if (rs.len == 0)rs.len = 1, rs.a[1] = 0;
            return rs;
        }
        rs.len = b.len + len - 1;
        for (int i = 1; i <= len; i++) {
            for (int j = 1; j <= b.len; ++j) {
                rs.a[i + j - 1] += a[i] * b.a[j];
                rs.a[i + j] += rs.a[i + j - 1] / 10;
                rs.a[i + j - 1] %= 10;
            }
        }
        while (rs.a[rs.len + 1])rs.len++;
        if (rs.len == 0)rs.len = 1, rs.a[1] = 0;
        return rs;
    }
};
int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    BigInt a, b;
    a.len = sz(str1);
    b.len = sz(str2);
    for (int i = 0; i < sz(str1); ++i)
    {
        a.a[a.len - i] = str1[i] - '0';
    }
    for (int i = 0; i < sz(str2); ++i)
    {
        b.a[b.len - i] = str2[i] - '0';
    }
    a.print();
    b.print();
    printf("\n");
    BigInt c = a * b;
    cout << c.len << endl;
    c.print();
    return 0;
}
