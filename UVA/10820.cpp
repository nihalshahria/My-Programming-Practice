/**
 *    author:  nihalshahria
 *    created: 22.12.2020 21:01:53
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
template<typename T>T Abs(T a) {return (a < 0 ? -a : a);}
template<typename T>inline void read(T &x) {
	T f = 1; char c; x = 0;
	for (c = getchar(); c < '0' || c > '9'; c = getchar())if (c == '-')f = -1;
	for (; c >= '0' && c <= '9'; c = getchar())x = x * 10 + c - '0';
	x *= f;
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
int nCr(int n, int r) {
	if (!r)return 1;
	return (nCr(n - 1, r - 1) * n) / r;
}
int Pow(int a, int b) {
	int ans = 1;
	while (b) {
		if (b & 1)ans = (ans * a);
		b >>= 1;
		a = (a * a);
	}
	return ans;
}
int phi[50010];
bool is_composit[50010];
void sieveOfphi() {
	for (int i = 1; i <= 50000; i++)phi[i] = i;
	is_composit[1] = 1;
	for (int i = 2; i <= 50000; i += 2) {
		if (i != 2)is_composit[1] = 1;
		phi[i] /= 2;
	}
	for (int i = 3; i <= 50000; i += 2){
		if (!is_composit[i]) 
		{
			phi[i]--;
			for (int ii = i << 1; ii <= 50000; ii += i){
				is_composit[ii] = 1;
				phi[ii] = phi[ii] / i * (i - 1);
			}
		}
	}
	for (int i = 1; i <= 50000; ++i)phi[i] += phi[i - 1];

}
int main() {
	sieveOfphi();
	int n;
	while (sf(n) && n) {
		printf("%lld\n", 1ll * 2 * phi[n] - 1);
	}
	return 0;
}
