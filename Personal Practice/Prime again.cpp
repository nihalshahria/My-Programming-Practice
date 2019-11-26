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
#define pf(a)           printf("%lld\n", a);
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
#define mx              66000
using namespace std;

std::vector <int> prime;
bool is_composite[66000];
int prime_check(ll i){
    ll r = sqrt(i);
    //std::cout << i << std::endl;
    for (int j = 0; prime[j] <= r; ++j)
    {
        if (i % prime[j]==0)
            return 0;
    }
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    std::fill (is_composite, is_composite + 66000, false);
    for (int i = 2; i < 66000; ++i) {
        if (!is_composite[i])
            prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < 66000; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
    int t;
    scanf("%d", &t);
    while(t--){
        ll n;
        sf(n);
        for (ll int i = n-1;; --i)  {
            if(prime_check(i)){
                 printf("%lld\n", i);
                 break;
            }
        }

    }
    return 0;
}
