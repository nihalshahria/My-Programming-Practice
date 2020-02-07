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
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define Pi              acos(-1)
#define mx              100001
using namespace std;
int arr[mx];
pii seg[mx * 4];
//int mini;

void Build(int node, int b, int e) {
	if (b == e) {
		seg[node] = mp(arr[b], arr[b]);
		return;
	}
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	Build(left, b, mid);
	Build(right, mid + 1, e);
	seg[node] = mp(min(seg[left].first, seg[right].first), max(seg[left].second, seg[right].second));
}

pii Query(int node, int b, int e, int l, int r) {
	if (l > e || r < b)return mp(INT_MAX, 0);
	if (b >= l && e <= r)return mp(seg[node].first, seg[node].second);
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	pii p1 = Query(left, b, mid, l, r);
	pii p2 = Query(right, mid + 1, e, l, r);
	return mp(min(p1.first, p2.first), max(p1.second, p2.second));
}

int main() {
	int t, z = 1;
	sf(t);
	while (t--) {
		printf("Case %d: ", z++);
		int n, k;
		sff(n, k);
		for (int i = 0; i < n; ++i)sf(arr[i]);
		Build(1, 0, n - 1);
		int maxi = 0;
		for (int i = 0; i + k < n; ++i) {
			int l = i + 1, r = i + k;
			pii x = Query(1, 1, n, l, r);
			//printf("%d\n", (x.second - x.first));
			//printf("%d %d\n", x.second, x.first);
			maxi = max((x.second - x.first), maxi);
		}
		printf("%d\n", maxi);
	}
	return 0;
}
