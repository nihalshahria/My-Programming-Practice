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
stack<int>v[25];
std::map<int, int> m;
int n, a, b;
string str1, str2;
void init() {
    for (int i = 0; i < n; ++i)v[i].push(i), m[i] = i;
}
void moveOn() {
    int posA = m[a], posB = m[b];
    // cout<<posA<<" "<<posB<<endl;
    // cout<<v[1].top()<<endl;
    int t = v[posB].top();
    while (t != b) {
        m[t] = t;
        v[t].push(t);
        v[posB].pop();
        t = v[posB].top();
    }
    t = v[posA].top();
    while (t != a) {
        m[t] = t;
        v[t].push(t);
        v[posA].pop();
        t = v[posA].top();
    }
    v[posA].pop(), v[posB].push(a), m[a] = posB;
}
void moveOv() {
    int posA = m[a], posB = m[b];
    int t = v[posA].top();
    while (t != a) {
        m[t] = t;
        v[t].push(t);
        v[posA].pop();
        t = v[posA].top();
    }
    v[posA].pop(), v[posB].push(a), m[a] = posB;
}
void pileOn() {
    int posA = m[a], posB = m[b];
    int t = v[posB].top();
    while (t != b) {
        m[t] = t;
        v[t].push(t);
        v[posB].pop();
        t = v[posB].top();
    }
    t = v[posA].top();
    stack<int>st;
    while (t != a) {
        st.push(t);
        v[posA].pop();
        t = v[posA].top();
    }
    st.push(t), v[posA].pop();
    while (!st.empty()) {
        t = st.top();
        st.pop();
        v[posB].push(t);
        m[t] = posB;
    }
}
void pileOv() {
    int posA = m[a], posB = m[b];
    int t = v[posA].top();
    stack<int>st;
    while (t != a) {
        st.push(t);
        v[posA].pop();
        t = v[posA].top();
    }
    st.push(t), v[posA].pop();
    while (!st.empty()) {
        t = st.top();
        st.pop();
        v[posB].push(t);
        m[t] = posB;
    }
}
int main() {
    sf(n);
    init();
    while (cin >> str1) {
        if (str1[0] == 'q')break;
        sf(a);
        cin >> str2;
        sf(b);
        if (m[a] == m[b])continue;
        if (str1[0] == 'm' && str2[1] == 'n')moveOn();
        else if (str1[0] == 'm' && str2[1] == 'v')moveOv();
        else if (str1[0] == 'p' && str2[1] == 'n')pileOn();
        else if (str1[0] == 'p' && str2[1] == 'v')pileOv();
    }
    for (int i = 0; i < n; ++i){
        printf("%d:", i);
        stack<int>st;
        while (!v[i].empty())st.push(v[i].top()), v[i].pop();
        while (!st.empty())printf(" %d", st.top()), st.pop();
        printf("\n");
    }
    return 0;
}
