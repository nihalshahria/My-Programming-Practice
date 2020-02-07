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
//#define mid ((b+e)/2)
const int sz=300005; // size of array
ll arr[sz],seg[sz*4];
void build(int node,int b,int e)
{
	seg[node]=0;
    if(b==e){
    	if(arr[b])seg[node]=1;
        return;
    }
    int mid = (b+e)/2;
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    seg[node]=seg[node*2]+seg[node*2+1];
}

ll query(int node,int b,int e,int l,int r) 
{
    if(b>r || e<l) return 0; 
    if(b>=l && e<=r){
        return seg[node];
    }
    int mid = (b+e)/2;
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
}

void update(int node,int b,int e,int i,int val) 
{
    if(b>i || e<i) return;
    if(b==e && b==i){
        seg[node]=val;
        return;
    }
    int mid = (b+e)/2;
    update(node*2,b,mid,i,val);
    update(node*2+1,mid+1,e,i,val);
    seg[node]=seg[node*2]+seg[node*2+1];
}

int main()
{
	int t, z=1;
	sf(t);
	while(t--){
		printf("Case %d:\n", z++);
		int n, q;
		memset(arr,0,sizeof(arr));
		memset(seg,0,sizeof(seg));
		sff(n,q);
		for (int i = 1; i <= n; ++i)sfl(arr[i]);
		int m = 2*n;
		build(1,1,m+1);
		getchar();
		for (int i = 0; i < q; ++i)
		{
			char c1;
			sfc(c1);
			int a;
			if (c1 == 'c'){
				int x=0;
				sf(a);
				int str = 1, end = n, mid;
				while(str<=end){
					mid = (str+end)/2;
					ll y = query(1,1,m+1,1,mid);
					if(y>=a){
						end = mid-1;
						x = mid;
					}
					else str = mid+1;
				}
				if (x==0)printf("none\n");
				else{
					printf("%lld\n", arr[x]);
					update(1,1,m+1,x,0);
				}
			}
			else{
				sf(a);
				n++;
				arr[n]=a;
				update(1,1,m+1,n,1);
			}
			getchar();
		}
	}
	return 0;
}
