#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 5;;
int  n, m, u, v, w, cost = 0;
vector<bool>vis(mx);
vector<int>dis(mx), parent(mx);
vector<vector<int>>graph[mx];
void primsMST(int src){
    for (int i = 1; i <= n; i++)dis[i] = 1e9;
    set<vector<int> > s;
    dis[src] = 0;
    s.insert({0,src});
    while(!s.empty()){
        auto x = *s.begin();
        s.erase(x);
        vis[x[1]] = true;
        u = x[1];
        v = parent[x[1]];
        w = x[0];
        cout<<u<<" "<<v<<" "<<w<<"\n";
        cost+=w;
        for(auto it: graph[x[1]]){
            if(vis[it[0]])continue;
            if(dis[it[0]]>it[1]){
                s.erase({dis[it[0]], it[0]});
                dis[it[0]] = it[1];
                s.insert({dis[it[0]], it[0]});
                parent[it[0]] = x[1];
            }
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    primsMST(1);
    cout<<cost<<"\n";
    return 0;
}
