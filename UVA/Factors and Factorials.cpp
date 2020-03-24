#include <bits/stdc++.h>
using namespace std;
vector <int> prime;
int f[105];
int dp[105][105];
void seive(){
    for(int i=3;i*i<=100;i+=2)if(!f[i])for(int j=i*i;j<=100;j+=2*i)f[j]=1;
    prime.push_back(2);
    for(int i=3;i<100;i+=2)if(!f[i])prime.push_back(i);
}
void factorization(){   //https://janmr.com/blog/2010/10/prime-factors-of-factorial-numbers/
    for(int i=2;i<=100;++i)
        for(int j=0;j<prime.size()&&prime[j]<=i;j++){
            int num=i,c=0;
            while(num%prime[j]==0)num/=prime[j],c++;
            dp[i][prime[j]]=c;
        }
}
int main(){
    int n;
    seive();
    factorization();
    while (scanf("%d",&n)&&n){
        if(n<10)printf("  ");
        else if(n<100)printf(" ");
        printf("%d! =",n);
        int c=0;
        for(int i=0;prime[i]<=n;++i){
            int sum=0;
            for(int j=1;j<=n;++j)sum+=dp[j][prime[i]];
            if(sum){
                c++;
                if(c==16)c=0,printf("\n      ");
                printf("%3d",sum);
            }
        }
        printf("\n");
    }
    return 0;
}
