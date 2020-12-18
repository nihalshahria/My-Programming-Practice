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
#define pf(a)           cout<<a<<endl
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
using namespace std;

int prime[1000000], c=0, a[1000000];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    for (int i = 1; i < 1000000; ++i)
    {
        prime[i]++;
        //printf("Prime[%d] = %d\n", i, prime[i]);
        if (a[prime[i]] == 2 && prime[prime[i]] == 4)
        {
            c++;
            if (c % 9 == 0)printf("%d\n", i);
        }
        for (int j = i+i; j < 1000000; j+=i)
        {
            if (prime[i] == 2)
                a[j]++;
            prime[j]++;
        }
        //printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
