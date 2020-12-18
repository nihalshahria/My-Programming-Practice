/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
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
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)

#define max 100015

using namespace std;

vector<int>v[max];

int level = 1;
int lev[max]={0}, a[max]={0};

bool vis[max];

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
                if (level<lev[p]+1)
                {
                    level = lev[p]+1;
                }
                a[lev[v[p][i]]]++;
                vis[v[p][i]]=true;
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    sf(t);
    for (int x = 1; x <= t; ++x)
    {


    int n, e;
    sf(n);
    for(int i=0; i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs();
    int even = 0, odd = 0;
    for (int i = 1; i <= level; ++i)
    {
        if (i%2==0)
        {
            even = even + a[i];
        }
        else
            odd = odd+a[i];
    }
    if (even>odd)
    {
        printf("Case %d: %d\n", x, even+1);
    }
    else
        printf("Case %d: %d\n", x, odd);

}
    return 0;
}
