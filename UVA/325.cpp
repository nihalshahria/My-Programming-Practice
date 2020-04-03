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
template<typename T>T Abs(T a){return (a<0?-a:a);}
template<typename T>T MAX(T a, T b){return (a>b?a:b);}
template<typename T>T MIN(T a, T b){return (a<b?a:b);}
template<typename T>T GCD(T a, T b){if(b==0)return a;return GCD(b,a%b);}
template<typename T>inline void read(T &x){
    T f=1;char c;x=0;
    for(c=getchar();c<'0'||c>'9';c=getchar())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';c=getchar())x=x*10+c-'0';
    x*=f;
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
    char s[1000];
    while(gets(s)) {
        if(!strcmp(s, "*"))
            break;
        int i = 0, j = strlen(s)-1;
        while(s[i] == ' ')  i++;
        while(s[j] == ' ')  j--;
        char trim[1000];
        memcpy(trim, s+i, j-i+1);
        trim[j-i+1] = '\0';
        int len = strlen(trim);
        int error = 0;
        i = 0;
        if(trim[i] == '+' || trim[i] == '-')
            i++;
        j = i;
        while(trim[i] >= '0' && trim[i] <= '9' && i < len)
            i++;
        if(j == i)  error = 1;
        if(i < len && trim[i] == '.') {
            i++;
            j = i;
            while(trim[i] >= '0' && trim[i] <= '9' && i < len)
                i++;
            if(j == i)  error = 1;
            if(i < len && (trim[i] == 'e' || trim[i] == 'E')) {
                i++;
                if(trim[i] == '+' || trim[i] == '-')
                    i++;
                j = i;
                while(trim[i] >= '0' && trim[i] <= '9' && i < len)
                    i++;
                if(j == i)  error = 1;
                else if(i < len) {error = 1;}
            } else if(i < len) {error = 1;}
        } else if(i < len && (trim[i] == 'e' || trim[i] == 'E')) {
            i++;
            if(trim[i] == '+' || trim[i] == '-')
                i++;
            j = i;
            while(trim[i] >= '0' && trim[i] <= '9' && i < len)
                i++;
            if(j == i)  error = 1;
            else if(i < len) {error = 1;}
        } else {error = 1;}
        if(error)
            printf("%s is illegal.\n", trim);
        else
            printf("%s is legal.\n", trim);
    }
    return 0;
}
