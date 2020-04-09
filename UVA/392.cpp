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
int main() {
    int a[10];
    while (~sf(a[9])) {
        for (int i = 8; i >= 1; --i)sf(a[i]);
        string str = "";
        int f = 0;
        for (int i = 9; i > 1; --i){
            if (f == 0 && a[i]) {
                if (a[i] < 0)str += "-";
                f++;
                if (a[i] != 1 && a[i] != -1)str += to_string(abs(a[i]));
                if (i != 2)str += "x^";
                else str += "x";
                if (i != 2)str += to_string(i - 1);
            }
            else if (a[i]) {
                if (a[i] < 0) str += " - ";
                else str += " + ";
                if (a[i] != 1 && a[i] != -1)str += to_string(abs(a[i]));
                if (i != 2)str += "x^";
                else str += "x";
                if (i != 2)str += to_string(i - 1);
                f++;
            }
        }
        if (a[1] != 0) {
            if (f == 0) {
                if (a[1] < 0)
                    str += "-";
            }
            else {
                if (a[1] < 0)
                    str += " - ";
                else str += " + ";
            }
            str += to_string(abs(a[1]));
            f++;
        }
        if (f == 0)str += "0";
        cout << str << endl;
    }
    return 0;
}
