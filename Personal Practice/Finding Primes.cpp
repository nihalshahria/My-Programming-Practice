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
#define sf(a)           scanf("%lld",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
using namespace std;

int number[10000010];
int a[10000010];
long long int ar[10000010];

void prime(){
    for (int i = 4; i < 10000010; i+=2)
        number[i] = 1;
    for (int i = 3; i*i < 10000010; i+=2)
        if (!number[i])
            for (int j = i+i; j < 10000010; j+=i)
                number[j]=1;
}

void findprime(){
    for (int i = 2; i <= 10000010; ++i){
        if (number[i]==0)
            a[i] = a[i-1]+1;
        else
            a[i] = a[i-1];
        ar[i] = a[i]-a[i/2];
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    prime();
    findprime();
    scanf("%d", &t);
    while(t--){
        ll int n;
        sf(n);
        // long long int d = a[n]-a[n/2];
        printf("%lld\n", ar[n]);
    }
    return 0;
}
