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
int main() {
    int t, z = 1;
    sf(t);
    while (t--) {
        printf("Case %d:\n", z++);
        int n, q;
        sff(n, q);
        int x[n + 1], y[n + 1];
        memset(x, -1, sizeof(x));
        memset(y, -1, sizeof(y));
        for (int i = 1; i <= n; ++i)sff(x[i], y[i]);
        sort(x, x + n + 1);
        sort(y, y + n + 1);
        //for (int i = 1; i <=n; ++i)cout<<i<<" "<<x[i]<<" "<<y[i]<<endl;
        for (int i = 1; i <= q; i++) {
            int val;
            sf(val);
            int b = 1, a = 1, e = n;
            while((e-b)>=5){
                int m = (b+e)/2;
                if(x[m]>val)e=m-1;
                else if(x[m]<val)b=m+1;
                else break;
            }
            while(b<=e){
                if(x[b+1]>val)break;
                b++;
            }
            while(x[b]>val)b--;
            b = min(b,e);
            a = 1, e = n;
            while((e-a)>=5){
                int m = (a+e)/2;
                if(y[m]>val)e=m-1;
                else if(y[m]<val)a=m+1;
                else break;
            }
            while(a<=e){
                if(y[a+1]>=val)break;
                a++;
            }
            while(y[a]>=val&&a>0)a--;
            a = min(a,e);
            printf("%d\n", b-a);
        }
    }
    return 0;
}
