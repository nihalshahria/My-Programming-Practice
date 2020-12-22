/**
 *    author:  nihalshahria
 *    created: 20.12.2020 21:32:26
**/
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
/*---------------------------------PB_DS---------------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
// order_of_key(k) = the number of items in a set that are strictly smaller than k.
/*-----------------------------------------------------------------------*/
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define MEM(a,b)            memset(a, (b), sizeof(a))
#define sfc(a)              scanf("%c",&a)
#define pb(a)               push_back(a)
#define X                   first
#define Y                   second
#define sz(x)               x.size()
#define pii                 pair<int,int>
#define pli                 pair<long long int,int>
#define mp(a,b)             make_pair(a,b)
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define rfr(i,x,n)          for(int i=x;i>n;i--)
#define LCM(a, b)           ((a)*((b)/GCD(a,b)))
template<typename T>T Abs(T a){return (a<0?-a:a);}
template<typename T>inline void read(T &x){
    T f=1;char c;x=0;
    for(c=getchar();c<'0'||c>'9';c=getchar())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';c=getchar())x=x*10+c-'0';
    x*=f;
}
using fl = float;
using db = double;
using ll = long long;
using ull = unsigned long long;
const int mx = 1000005;
const int inf = 99999999;
const int intlim = 2147483648;
const db PI = acos(-1); //3.14159265358979323846264338328
/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;
std::vector <int> prime;
bool is_composite[mx];
int nCr(int n, int r){
    if(!r)return 1;
    return (nCr(n-1, r-1)*n)/r;
}
int Pow(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1)ans = (ans * a);
        b>>=1;
        a = (a * a);
    }
    return ans;
}
void sieve() {
    std::fill (is_composite, is_composite + mx, false);
    for (int i = 2; i < mx; ++i) {
        if (!is_composite[i])prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < mx; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
}
int main(){
	sieve();
    ll m;
    int z = 0;
    while(sfl(m) && m){
    	int x = 0;
    	ll n = m;
    	ll ans = 0ll;
    	for (int i = 0; i < sz(prime) && prime[i]*prime[i]<=n; ++i)
    	{
    		if(n%prime[i]==0){
    			
    			x++;int c = 0;
    			while(n%prime[i]==0){
    				n/=prime[i],c++;
    			}
    			// cout<<prime[i]<<" "<<c<<" "<<n<<endl;
    			ans+=(Pow(prime[i],c));
    		}
    	}
    	printf("Case %d: ", ++z);
    	if(n>1)ans+=n,x++;
    	// cout<<ans<<" ";
    	// if(ans==m)ans++;
    	if(x<2)printf("%lld\n", m+1);
    	else printf("%lld\n", ans);
    	// printf((m==n)?"%lld\n",m+1:"%lld\n",ans);
    }
    return 0;
}