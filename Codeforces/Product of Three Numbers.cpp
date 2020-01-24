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
#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define mx              31700

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t, m, f, a[3];
    scanf("%d",&t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        f = 0;
        for (int i = 2; i <= sqrt(n); ++i){
            m = n, f = 0;
            if (m%i == 0){
                a[0] = i;
                int x = m/i;
                for (int j = i+1; j <= sqrt(x); ++j){
                    if (x%j==0 && j!= sqrt(x)){
                        a[1]=j, a[2]=x/j, f=1;
                        break;
                    }
                }
                if (f==1)break;
            }
        }
        if (f == 1)printf("YES\n%d %d %d\n", a[0], a[1], a[2]);
        else printf("NO\n");
    }
    return 0;
}
