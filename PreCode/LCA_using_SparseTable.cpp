#include<bits/stdc++.h>
using namespace std;
struct SparseTable{
    int n;
    vector<vector<int>> sp;
    function<int(const int&, const int&)>func;
    SparseTable(){};
    SparseTable(const vector<int>& v, function<int(const int&, const int&)>f){
        n = v.size();
        func = f;
        int max_log = 32 - __builtin_clz(n);
        sp.resize(max_log);
        sp[0] = v;
        for(int j = 1; j<max_log; ++j){
            sp[j].resize(n-(1<<j)+1);
            for (int i = 0; i <= n-(1<<j); ++i){
                sp[j][i] = func(sp[j-1][i], sp[j-1][i+(1<<(j-1))]);
            }
        }
    }
    void showTable(){
        for (int i = 0; i < sp.size(); ++i, cout<<"\n")
            for (int j = 0; j < sp[i].size(); ++j)
                cout<<sp[i][j]<<" ";
    }
    int get(int st, int nd){
        int lg = 32-__builtin_clz(nd - st +1)-1;
        return func(sp[lg][st], sp[lg][nd-(1<<lg)+1]);
    }
};
struct LCA{
    vector<int> height, euler, first;
    vector<bool> vis;
    int n, m;
    SparseTable st;
    LCA(){};
    LCA(vector<vector<int>> &v, int u = 0){
        n = v.size();
        height.resize(n);
        first.resize(n);
        euler.reserve(n << 1);
        vis.assign(n, false);
        dfs(v, u);
        st = SparseTable(euler, [&](int a, int b) { return height[a]<height[b]?a:b;});
    }
    void dfs(vector<vector<int>> &v, int u, int h = 0){
        vis[u] = true;
        height[u] = h;
        first[u] = euler.size();
        euler.push_back(u);
        for (auto &i : v[u])if (!vis[i])dfs(v, i, h + 1),euler.push_back(u);
    }    
    int lca(int u, int v){
        int p1 = first[u], p2 = first[v];
        if (p1 > p2)swap(p1, p2);
        return st.get(p1, p2);
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
