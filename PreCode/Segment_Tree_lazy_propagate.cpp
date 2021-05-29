#include <bits/stdc++.h>
using namespace std;
#define mid ((b + e) / 2)
const int sz = 100005;
char str[sz];
int seg[sz * 4], lazy[sz * 4];
int arr[sz];
void build(int node, int b, int e)
{
    if (b == e)
    {
        seg[node] = 1;
        return;
    }
    build(node * 2, b, mid);
    build(node * 2 + 1, mid + 1, e);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
void propagate(int node, int b, int e)
{
    seg[node] += lazy[node] * (e - b + 1);
    if (b != e)
    {
        lazy[node * 2] += lazy[node];
        lazy[node * 2 + 1] += lazy[node];
    }
    lazy[node] = 0;
}
void update(int node, int b, int e, int l, int r, int val)
{
    propagate(node, b, e);
    if (b > r || e < l)
        return;
    if (b >= l && e <= r)
    {
        seg[node] = (((seg[node] + val * (e - b + 1)) / 3) * 3);
        if (b != e)
        {
            lazy[node * 2] += val;
            lazy[node * 2 + 1] += val;
        }
        return;
    }
    update(node * 2, b, mid, l, r, val);
    update(node * 2 + 1, mid + 1, e, l, r, val);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}
int query(int node, int b, int e, int l, int r)
{
    propagate(node, b, e);
    if (b > r || e < l)
        return 0ll;
    if (b >= l && e <= r)
        return seg[node];
    return query(node * 2, b, mid, l, r) + query(node * 2 + 1, mid + 1, e, l, r);
}
int main()
{
    int t, z = 1, l, r, p, i, n, q, x;
    scanf("%d", &t);
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        memset(seg, 0, sizeof(seg));
        memset(lazy, 0, sizeof(lazy));
        printf("Case %d:\n", z++);
        scanf("%d%d", &n, &q);
        //for (i = 0; i < n; i++)arr[i+1] = 3;
        build(1, 1, n);
        for (i = 0; i < q; ++i)
        {
            scanf("%d%d%d", &x, &l, &r);
            if (x == 1)
            {
                printf("%d\n", query(1, 1, n, l + 1, r + 1));
            }
            else
            {
                update(1, 1, n, l, r, 1);
            }
        }
    }
}
