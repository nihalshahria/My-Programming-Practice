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
#define pf(a)           printf("%d\n", a);
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
#define mx              99999010
using namespace std;
std::vector <int> prime;
int c=0;
bool is_composite[mx];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    std::fill (is_composite, is_composite + mx, false);
    for (int i = 2; i < mx; ++i) {
        if (!is_composite[i]){
            c++;
            prime.push_back (i);
            if (c % 100 == 1)
                pf(i);
        }
        for (int j = 0; j < prime.size () && i * prime[j] < mx; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
    return 0;
}
