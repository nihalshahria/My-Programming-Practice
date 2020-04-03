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
using namespace std;
int main() {
    int n;
    string str;
    while (sf(n)) {
        cin >> str;
        if (n == 0 && str == "0")return 0;
        int phase = 1;
        int l = sz(str);
        while (phase < 6) {
            if (phase == 1) {
                for (int i = 0; i < l; ++i) {
                    if (str[i] == '1' || str[i] == '4') {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf(" ");
                        printf(" ");
                    }
                    // else if (str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
                    else {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf("-");
                        printf(" ");
                    }
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            if (phase == 2) {
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < l; ++j)
                    {
                        if (str[j] == '1' || str[j] == '2' || str[j] == '3' || str[j] == '7') {
                            printf(" ");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf("|");
                        }
                        else if (str[j] == '4' || str[j] == '9' || str[j] == '8' || str[j] == '0') {
                            printf("|");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf("|");
                        }
                        else {
                            printf("|");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf(" ");
                        }
                        if (j < l - 1)printf(" ");
                    }
                    printf("\n");
                }
            }
            if (phase == 3) {
                for (int i = 0; i < l; ++i) {
                    if (str[i] == '1' || str[i] == '7' || str[i] == '0') {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf(" ");
                        printf(" ");
                    }
                    // else if (str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
                    else {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf("-");
                        printf(" ");
                    }
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            if (phase == 4) {
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < l; ++j)
                    {
                        if (str[j] == '1' || str[j] == '4' || str[j] == '3' || str[j] == '7' || str[j] == '5'|| str[j] == '9') {
                            printf(" ");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf("|");
                        }
                        else if (str[j] == '6' || str[j] == '8' || str[j] == '0') {
                            printf("|");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf("|");
                        }
                        else {
                            printf("|");
                            for (int j = 0; j < n; ++j)printf(" ");
                            printf(" ");
                        }
                        if (j != l - 1)printf(" ");
                    }
                    printf("\n");
                }
            }
            if (phase == 5) {
                for (int i = 0; i < l; ++i) {
                    if (str[i] == '1' || str[i] == '4' || str[i] == '7') {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf(" ");
                        printf(" ");
                    }
                    // else if (str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
                    else {
                        printf(" ");
                        for (int j = 0; j < n; ++j)printf("-");
                        printf(" ");
                    }
                    if (i != l - 1)printf(" ");
                }
                printf("\n");
            }
            phase++;
        }
        cout<<endl;
    }
    return 0;
}
