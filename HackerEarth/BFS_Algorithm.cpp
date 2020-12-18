/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |    |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________|
*/

#include <bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)
#define p(a)            push(a)
using namespace std;
vector<int>v[10];
bool vis[10];
int lev[10];


void BFS(int start)
{
    queue<int>q;
    q.p(start);
    vis[start]=true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 0; i < v[p].size(); ++i)
        {
            if(vis[v[p][i]]!=true)
            {
                lev[ v[ p ][ i ] ] = lev[ p ]+1;
                q.push(v[ p ][ i ]);
                vis[ v[ p ][ i ] ] = true;
                cout<< v[p][i]<<" "<<lev[v[p][i]] <<endl;
            }
        }
    }
}
int main(){
    int n, e;
    cin>>n>>e;
    for (int i = 0; i < e; ++i)
    {
        int x, y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    int start;
    cin>>start;
    BFS(start);

    return 0;
}

