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
#define pf                  printf
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
#define sfc(a)              scanf("%c",&a)
#define pb(a)               push_back(a)
#define db                  double
#define fl                  float
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define pii                 pair<int,int>
#define pli                 pair<long long int,int>
#define pis                 pair<int,string>
#define psi                 pair<string,int>
#define mp(a,b)             make_pair(a,b)
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define PI                  acos(-1) //3.14159265358979323846264338328
#define intlim              2147483648
#define MAX                 1000000
#define inf                 99999999
#define mx                  100005

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
using namespace std;

//#define INT_MAX 1<<30

//typedef long long ll;


#define mid ((b+e)/2)

const int sz = 100005;

ll seg[sz * 4], lazy[sz * 4];
ll arr[sz];

void build(int node, int b, int e)
{
	if (b == e) {
		seg[node] = arr[b];
		return;
	}
	build(node * 2, b, mid);
	build(node * 2 + 1, mid + 1, e);
	seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

void propagate(int node, int b, int e)
{
	seg[node] += lazy[node] * (e - b + 1);
	if (b != e) {
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	lazy[node] = 0;
}



void update(int node, int b, int e, int l, int r, ll val)
{
	propagate(node, b, e);
	if (b > r || e < l) return;
	if (b >= l && e <= r) {
		seg[node] += val * (e - b + 1);
		if (b != e) {
			lazy[node * 2] += val;
			lazy[node * 2 + 1] += val;
		}
		return;
	}
	update(node * 2, b, mid, l, r, val);
	update(node * 2 + 1, mid + 1, e, l, r, val);
	seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

ll query(int node, int b, int e, int l, int r)
{
	propagate(node, b, e);
	if (b > r || e < l) return 0ll;
	if (b >= l && e <= r) return seg[node];
	return query(node * 2, b, mid, l, r) + query(node * 2 + 1, mid + 1, e, l, r);
}


int main()
{
	int t, z = 1;
	sf(t);
	while (t--) {
		int n, q;
		sff(n,q);
		memset(arr,0,sizeof(arr));
		memset(seg,0,sizeof(seg));
		memset(lazy,0,sizeof(lazy));
		build(1, 1, n);
		printf("Case %d:\n", z++);
		while (q--) {
			char ch;
			int l, r;
			ll v;
			scanf(" %c", &ch);
			if (ch == '0') {
				scanf("%d%d%lld", &l, &r, &v);
				update(1, 1, n, l + 1, r + 1, v);
			} 
			else {
				scanf("%d%d", &l, &r);
				printf("%lld\n", query(1, 1, n, l + 1, r + 1));
			}
		}
	}
}
