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
#define mx                  105

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;
std::vector <int> prime;
int f[mx];
int dp[105][105];
void seive () {
    for (int i = 3; i * i <= 100; i += 2)if (!f[i])for (int j = i * i; j <= 100; j += 2 * i)f[j] = 1;
    prime.pb(2);
    for (int i = 3; i < 100; i += 2)if (!f[i])prime.pb(i);
}
void factorization() {
    for (int i = 2; i <= 100; ++i)
    {
        for (int j = 0; j < prime.size() && prime[j] <= i; j++) {
            int num = i;
            int c = 0;
            while (num % prime[j] == 0)num /= prime[j], c++;
            dp[i][prime[j]] = c;
        }
    }
}
int main() {
    int n;
    seive();
    factorization();
    while (sf(n) && n) {
        if (n < 10)printf("  ");
        else if (n < 100)printf(" ");
        printf("%d! =", n);
        int c = 0;
        for (int i = 0; prime[i] <= n; ++i){
            int sum = 0;
            for (int j = 1; j <= n; ++j)sum += dp[j][prime[i]];
            if (sum) {
                c++;
                if (c == 16)c = 0, printf("\n      ");
                if (sum < 10)printf("  ");
                else if (sum < 100)printf(" ");
                printf("%d",sum);
            }
        }
        printf("\n");
    }
    return 0;
}
