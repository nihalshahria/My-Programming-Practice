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
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    sf(t);
    while(t--)
    {
        int n, m, k, s, t;
        int n1, n2, w;
        sfff(n,m,k);
        sff(s,t);
        std::vector<int> vs[n+1], vt[n+1], ws[n+1], wt[n+1];
        //int vis[n+10];
        int a1[n+1], a2[n+1];
        while(m--){
            sfff(n1,n2,w);
            vs[n1].pb(n2);
            vt[n2].pb(n1);
            ws[n1].pb(w);
            wt[n2].pb(w);
        }
        memset(a1, INF, sizeof(a1));
        memset(a2, INF, sizeof(a2));
        //memset(vis, 0, sizeof(vis));
        a1[s]=0;
        a2[t]=0;
        queue<pair<int, int>>q;
        q.push(mp(0, s));
        //vis[s]=1;
        while(!q.empty())
        {
            pair<int, int>p = q.front();
            int x = p.second;
            q.pop();
            for (int i = 0; i < vs[x].size(); ++i)
            {
                if(a1[vs[x][i]] > a1[x] + ws[x][i])
                {
                    a1[vs[x][i]] = a1[x] + ws[x][i];
                    q.push(mp(a1[vs[x][i]], vs[x][i]));
                }
            }
        }
        q.push(mp(0, t));
        //vis[t]=1;
        while(!q.empty())
        {
            pair<int, int>p = q.front();
            int x = p.second;
            q.pop();
            for (int i = 0; i < vt[x].size(); ++i)
            {
                if(a2[vt[x][i]] > a2[x] + wt[x][i])
                {
                    a2[vt[x][i]] = a2[x] + wt[x][i];
                    q.push(mp(a2[vt[x][i]], vt[x][i]));
                }
            }
        }
        int c = a1[t];
        while(k--)
        {
            int nd1, nd2, ed;
            sfff(nd1,nd2,ed);
            c = min(c, ed + min(a1[nd1], a1[nd2]) + min(a2[nd1], a2[nd2]));
        }
        if(c == INF)
            c=-1;
        printf("%d\n", c);
    }
    return 0;
}
