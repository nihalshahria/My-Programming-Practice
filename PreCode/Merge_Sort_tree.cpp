#include <bits/stdc++.h>
using namespace std;
#define mid (b + e) / 2
const int mx = 30000 + 5;
int arr[mx];
vector<int> seg[mx * 4];

void build(int node, int b, int e)
{
    if (b == e)
    {
        seg[node].push_back(arr[b]);
        return;
    }
    build(node * 2, b, mid);
    build(node * 2 + 1, mid + 1, e);
    merge(seg[node * 2].begin(), seg[node * 2].end(), seg[node * 2 + 1].begin(), seg[node * 2 + 1].end(), back_inserter(seg[node]));
    // merge(node, seg[node * 2], seg[node * 2 + 1]);
}
int query(int node, int b, int e, int l, int r, int x)
{
    if (b > r || e < l)
        return 0;
    if (b >= l && e <= r)
    {
        // int ans = upper_bound(seg[node].begin(), seg[node].end(), (x - 1)) - seg[node].begin(); //* strictly lower
        int ans = seg[node].end() - upper_bound(seg[node].begin(), seg[node].end(), (x)); //* strictly greater
        return ans;
    }
    return query(node * 2, b, mid, l, r, x) + query(node * 2 + 1, mid + 1, e, l, r, x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, 1, n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        cout << query(1, 1, n, l, r, x) << endl;
    }
    // for (int i = 1; i < 16; i++)
    // {
    //     for (auto x : seg[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
}
