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
#define mx              100001
using namespace std;
#define MX mx*4
int X[30000 + 10];
int M[MX], A[MX], n;
void Built(int node, int b, int e) {
    if (b == e) {
        M[node] = b;
        return;
    }
    Built(node * 2, b, (b + e) / 2);
    Built(node * 2 + 1, (b + e) / 2 + 1, e);
    if (X[M[node * 2]] < X[M[node * 2 + 1]]) M[node] = M[node * 2];
    else M[node] = M[node * 2 + 1];
}

int Query(int node, int b, int e, int i, int j) {
    if (b >= i && e <= j) return M[node];
    if (b > j || e < i)return -1;
    int mid = (b + e) / 2;
    int l = Query(node * 2, b, mid, i, j);
    int r = Query(node * 2 + 1, mid + 1, e, i, j);
    if (l == -1) return r;
    if (r == -1) return l;
    if (X[l] < X[r])return l;
    return r;
}

ll Area(int b, int e) {
    if (b > e) return 0;
    if (b == e) return X[b];
    int mini = Query(1, 1, n, b, e);
    ll maxi = max(Area(b, mini - 1), Area(mini + 1, e));
    return max(maxi, (ll)(e - b + 1) * X[mini]);
}

int main() {
    int t, z = 1;
    sf(t);
    while (t--) {
        sf(n);
        for (int i = 1; i <= n; i++)sf(X[i]);
        Built(1, 1, n);
        printf("Case %d: %lld\n", z++, Area(1, n));
    }
    return 0;
}
