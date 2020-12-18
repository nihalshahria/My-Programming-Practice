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

int number[100000010];
long long int a[100000010];
void prime(){
    for (int i = 4; i < 100000010; i+=2)
        number[i] = 1;
    for (int i = 3; i*i < 100000010; i+=2)
        if (!number[i])
            for (int j = i+i; j < 100000010; j+=i)
                number[j]=1;
}

void prime_counter(){
    a[2]=1;
    for (int i = 3; i < 100000010; ++i){
        if (!number[i])
            a[i] = a[i-1]+1;
        else
            a[i]=a[i-1];
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long int x;
    prime();
    prime_counter();
    while(sf(x)==1 && x!=0){
        /*float n = log(x);
        n = x/n;
        n = fabs(a[x]-n)/a[x]*100;*/
        float n = fabs(a[x]-(x/log(x)))/a[x]*100;
        printf("%0.1lf\n", n);
    }
    return 0;
}
