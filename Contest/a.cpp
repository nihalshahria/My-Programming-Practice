#include <bits/stdc++.h>
#define sf(a)               scanf("%d",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define MEM(a,b)            memset(a, (b), sizeof(a))
template<typename T>T MAX(T a, T b){return (a>b?a:b);}
template<typename T>T MIN(T a, T b){return (a<b?a:b);}
using namespace std;
int dp[2005][2005];
int main(){
    int t,z = 1,n,m;
    sf(t);
    char ch;
    while(t--){
        sff(m,n);
        MEM(dp,0);
        for (int i = 1; i <= m; ++i){
            getchar();
            for (int j = 1; j <= n; ++j)ch = getchar(),dp[i][j]=(ch=='1')?0:dp[i][j-1]+1;
        }
        int ans = 0;
        for (int i = 1; i <= m; ++i){
            for (int j = 1; j <= n; ++j){
                if(dp[i][j]>0){
                    for (int k = i, c = 1,mini = dp[i][j]; k >=1 && dp[k][j]!=0; --k, c++,mini = MIN(mini,dp[k][j]))
                            ans = MAX(ans, (mini*c));
                }
            }
        }
        printf("Case %d: %d\n", z++, ans);
    }
    return 0;
}
