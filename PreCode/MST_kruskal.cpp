#include <bits/stdc++.h>
using namespace std;
const int mx = 100005;
/* <-------- Disjoint Set Union --------> */
class DSU
{
public:
    vector<int> parent;
    vector<int> size;
    int maxSize;

    DSU(int n){
        size.resize(n, 1);
        for (int i = 0; i < n; i++)
            parent.push_back(i);
    }

    int find_set(int v){
        if (parent[v] != v)parent[v] = find_set(parent[v]);
        return parent[v];
    }

    bool unite_sets(int a, int b){
        a = find_set(a), b = find_set(b);
        if (a == b)return false;
        if (size[a] < size[b])swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        maxSize = max(maxSize, size[a]);
        return true;
    }
};
/* <------------------------------------> */
int main(int argc, char const *argv[])
{
    int n, m, u, v, w, cost = 0;
    cin >> n >> m;
    DSU dsu(n);
    set<vector<int>> edges;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        edges.insert({w, u, v});
    }
    for (auto i : edges){
        int w = i[0], u = i[1], v = i[2];
        if(dsu.unite_sets(u, v)){
            cost += w;
        }
    }
    cout << cost << "\n";
    return 0;
}
