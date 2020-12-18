#include<bits/stdc++.h>
using namespace std;
#define mid ((b+e)/2)
const int sz = 100005;
ll seg[sz * 4], lazy[sz * 4];
ll arr[sz];
void build(int node, int b, int e){
    if (b == e) {
        seg[node] = arr[b];
        return;
    }
    build(node * 2, b, mid);
    build(node * 2 + 1, mid + 1, e);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
void propagate(int node, int b, int e){
    seg[node] += lazy[node] * (e - b + 1);
    if (b != e) {
        lazy[node * 2] += lazy[node];
        lazy[node * 2 + 1] += lazy[node];
    }
    lazy[node] = 0ll;
}
void update(int node, int b, int e, int l, int r, ll val){
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
ll query(int node, int b, int e, int l, int r){
    propagate(node, b, e);
    if (b > r || e < l) return 0ll;
    if (b >= l && e <= r) return seg[node];
    return query(node * 2, b, mid, l, r) + query(node * 2 + 1, mid + 1, e, l, r);
}
int main(){
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
