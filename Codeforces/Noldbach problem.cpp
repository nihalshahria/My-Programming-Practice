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
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define Pi              acos(-1)
#define INF             9999999

using namespace std;
std::vector <int> prime;
bool is_composite[1010];
int seive (int n, int k) {
    if(k==0)return 1;
    std::fill (is_composite, is_composite + n, false);
    int x=0;
    for (int i = 2; i <= n; ++i) {
        if (!is_composite[i])
            prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] <= n; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 0; prime[i]+prime[i+1]+1 <= n; ++i){
        if (is_composite[prime[i]+prime[i+1]+1]==false) x++;
        if (x==k)return 1;
    }
    return 0;
}
int main(){
    int n, k;
    sff(n,k);
    printf((seive(n,k))?"YES\n":"NO\n");
    return 0;
}
