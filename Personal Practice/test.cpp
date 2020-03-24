#include <bits/stdc++.h>
using namespace std;
int coin[]={1, 5, 10, 25, 50}; //value of coins available
int make; //we will try to make 18
int dp[6][7500];
int call(int i,int amount){
    if(i>=5) { //All coins have been taken
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount]; //no need to calculate same state twice
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1=call(i,amount-coin[i]); //try to take coin i
    ret2=call(i+1,amount); //dont take coin i
    return dp[i][amount]=ret1+ret2; //storing and returning.
}
int main(){
    memset(dp,-1,sizeof(dp));
    while(~scanf("%d",&make))printf("%d\n", call(0,make));
    return 0;
}/*
int a[7510], n;
int coins[] = {1, 5, 10, 25, 50};
int main() {
    a[0] = 1;
    for (int i = 0; i < 5; ++i)
        for (int j = coins[i]; j <= 7500; ++j)
            a[j] += a[j - coins[i]];
    while (~scanf("%d",&n))printf("%d\n", a[n]);
    return 0;
}*/
