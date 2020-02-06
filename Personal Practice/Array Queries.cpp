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
int seg[mx * 4];
int mini;

void Build(int node, int b, int e) {
    if (b == e) {
        seg[node] = arr[b];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    Build(left, b, mid);
    Build(right, mid + 1, e);
    seg[node] = min(seg[left], seg[right]);
}

int Query(int node, int b, int e, int l, int r) {
    if (l > e || r < b)return INT_MAX;
    if (b >= l && e <= r)return seg[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = Query(left, b, mid, l, r);
    //mini = min(mini,p1);
    int p2 = Query(right, mid + 1, e, l, r);
    //mini = min(p1,p2);
    return min(p1,p2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, z=1;
    sf(t);
    while (t--) {
        printf("Case %d:\n", z++);
        int n, k;
        sff(n,k);
        memset(arr, 0, n+2);
        memset(seg, 0, (n * 4)+2);
        for (int i = 0; i < n; ++i)sf(arr[i]);
        Build(1, 0, n-1);
        for (int i = 0; i < k; ++i){
            int l,r;
            sff(l,r);
            mini = INT_MAX;
            printf("%d\n", Query(1, 1, n, l, r));
            //cout << Query(1, 1, n, l, r) << endl;
        }
        //cout<<endl;
    }
    return 0;
}
