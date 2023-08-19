#include<bits/stdc++.h>
using namespace std;
const int mx = 100005;
/* <-------- Disjoint Set Union --------> */
vector<int>parent(mx);
vector<int>size(mx);
void make_set(int v){
    parent[v] = v;
    size[v] = 1;
}
int find_set(int v){
    if(parent[v]==v)return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a==b)return;
    if(size[a]<size[b])swap(a,b);
    parent[b] = a;
    size[a]+=size[b];
}
/* <------------------------------------> */
int main(int argc, char const *argv[])
{
    for(int i = 0; i < mx; ++i)make_set(i);
    int n, m, u, v, w, cost = 0;
    cin>>n>>m;
    set<vector<int>>edges;
    for (int i = 0; i < m; i++){
        cin>>u>>v>>w;
        edges.insert({w,u,v});
    }
    for(auto i: edges){
        int w = i[0], u = i[1], v = i[2];
        int x = find_set(u);
        int y = find_set(v);
        if(x==y)continue;
        else{
            cout<<u<<" "<<v<<"\n";
            cost+=w;
            union_sets(u,v);
        }
    }
    cout<<cost<<"\n";
    return 0;
}
