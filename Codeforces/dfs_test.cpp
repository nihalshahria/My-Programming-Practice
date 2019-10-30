#include<bits/stdc++.h>
using namespace std;
int v[100][100];
bool vis[100010];
int node;
void dfs(int a) {
    vis[a] = true;
    node--;
    for(int i = 0;i < n;++i)
        if(v[a][i]==1)
        {
            dfs(i);
            }
}

int main()
{
    int n, e;
    cin>>n>>e;
    int p;
    node=n;
    for(int i = 0; i < e; ++i)
    {
        int a,b;
        cin>>a>>b;
        v[a][b]=1;
        v[b][a]=1;
    }

    cin>>p;
    dfs(p);
    cout<< node<<endl;
}

