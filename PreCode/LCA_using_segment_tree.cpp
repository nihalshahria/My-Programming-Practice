#include<bits/stdc++.h>
using namespace std;
struct LCA{
    vector<int> height, euler, first, segTree;
    vector<bool> vis;
    int n, m;
    LCA(){};
    LCA(vector<vector<int>> &v, int u = 0){
        n = v.size();
        height.resize(n);
        first.resize(n);
        euler.reserve(n << 1);
        vis.assign(n, false);
        dfs(v, u);
        m = euler.size();
        segTree.resize(m << 2);
        build(1, 0, m-1);
    }
    void dfs(vector<vector<int>> &v, int u, int h = 0){
        vis[u] = true;
        height[u] = h;
        first[u] = euler.size();
        euler.push_back(u);
        for (auto &i : v[u])if (!vis[i])dfs(v, i, h + 1),euler.push_back(u);
    }
    void build(int node, int l, int r){
        if (l == r)segTree[node] = euler[l];
        else{
            int mid = (l + r) >> 1;
            build(node << 1, l, mid);
            build(node << 1 | 1, mid + 1, r);
            segTree[node] = (height[segTree[node << 1]] < height[segTree[node << 1 | 1]]) ? segTree[node << 1] : segTree[node << 1 | 1];
        }
    }
    int query(int node, int l, int r, int i, int j){
        if (i > r || j < l)return -1;
        if (i <= l && r <= j)return segTree[node];
        int mid = (l + r) >> 1;
        int p1 = query(node << 1, l, mid, i, j);
        int p2 = query(node << 1 | 1, mid + 1, r, i, j);
        if (p1 == -1)return p2;
        if (p2 == -1)return p1;
        return height[p1] < height[p2] ? p1 : p2;
    }
    int lca(int u, int v){
        int p1 = first[u], p2 = first[v];
        if (p1 > p2)swap(p1, p2);
        return query(1, 0, m-1, p1, p2);
    }
};
int main(int argc, char const *argv[]){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    for (int i = 0; i < n-1; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    LCA lca(v, 1);
    while(m--){
        int x,y;
        cin>>x>>y;
        cout <<x<<" "<<y<<" "<< lca.lca(x, y) << endl;
    }
    return 0;
}
