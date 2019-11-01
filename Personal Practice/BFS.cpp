#include<bits/stdc++.h>

#define max 100015

using namespace std;

vector<int>v[max];

int lev[max]={0}, a[max]={0};

bool vis[1000];

void bfs()
{
    queue<int>q;
    q.push(1);
    vis[1]=true;
    a[1]=1;
    lev[1]=1;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0; i<v[p].size(); ++i)
        {
            if(vis[v[p][i]]==false)
            {
                q.push(v[p][i]);
                lev[v[p][i]]= lev[p]+1;
                a[lev[v[p][i]]]++;
                vis[v[p][i]]=true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n;
    for(int i=0; i<n-1;i++)
    {
        int x, y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int x;
    cin>>x;
    bfs();
    cout<< a[x]<<endl;
    return 0;
}