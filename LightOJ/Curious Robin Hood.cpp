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
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
using namespace std;
#define mid ((b+e)/2)
const int sz = 100005; // size of array
int arr[sz], seg[sz * 4], n;
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

int query(int node, int b, int e, int l, int r)
{
	if (b > r || e < l) return 0;
	if (b >= l && e <= r) {
		return seg[node];
	}
	return query(node * 2, b, mid, l, r) + query(node * 2 + 1, mid + 1, e, l, r);
}

void update(int node, int b, int e, int i, int val) 
{
	if (b > i || e < i) return;
	if (b == e) {
		arr[i] = val;
		seg[node] = val;
		return;
	}
	update(node * 2, b, mid, i, val);
	update(node * 2 + 1, mid + 1, e, i, val);
	seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

int main()
{
	int t, z = 1;
	sf(t);
	while (t--) {
		printf("Case %d:\n", z++);
		int n, q;
		sff(n, q);
		for (int i = 0; i < n; ++i)sf(arr[i]);
		build(1, 0, n - 1);
		for (int i = 0; i < q; ++i)
		{
			int x;
			sf(x);
			if (x == 1) {
				int y;
				sf(y);
				printf("%d\n", arr[y]);
				update(1, 0, n - 1, y, 0);
			}
			else if (x == 2)
			{
				int pos, y;
				sff(pos, y);
				update(1, 0, n - 1, pos, arr[pos] + y);
			}
			else {
				int pos, y;
				sff(pos, y);
				printf("%d\n", query(1, 0, n - 1, pos, y));
			}
		}
	}
}
