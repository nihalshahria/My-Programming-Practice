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
#define sff(a,b)        scanf("%lld%lld",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d\n", a);
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
#define mx              32000
using namespace std;
std::vector <int> prime;
bool is_composite[mx];
void seive () {
    std::fill (is_composite, is_composite + mx, false);
    for (int i = 2; i < mx; ++i) {
        if (!is_composite[i])
            prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < mx; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
    /*for (int i = 0; i < prime.size(); ++i)
        cout<<prime[i]<<endl;*/
}

void seg_seive(ll l, ll r){
    bool is_prime[r-l+1];
    for (int i = 0; i < r-l+1; ++i) is_prime[i]=true;
    if (l==1)is_prime[0]=false;
    for (int i = 0; prime[i]*prime[i] <= r; ++i){
        int cp = prime[i];
        ll b = (l/cp)*cp;
        if (b<l)
            b+=cp;
        for (ll j = b; j <= r; j+=cp)
            is_prime[j-l]=false;
        if (b == cp) is_prime[b-l] = true;
    }
    for (int i = 0; i < r-l+1; ++i)
        if (is_prime[i]) printf("%lld\n", i+l);
    printf("\n");
}

int main(){
    seive();
    int t;
    sf(t);
    while(t--){
        long long int l, r;
        sff(l,r);
        seg_seive(l,r);
    }
    return 0;
}
