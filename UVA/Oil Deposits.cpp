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
#define INF             9999999

using namespace std;
int d[8][2]={-1,-1,
              0,-1,
              1,-1,
              -1,0,
              1,0,
              -1,1,
              0,1,
              1,1};
char grid[102][102];
int k, m, n;

void dfs(int x, int y)
{
    if (grid[x][y]=='*'||x<0||y<0||x>=m||y>=n)return;
    //cout<<"Bih "<<x<<" "<<y<<endl;
    grid[x][y]='*';
    fr(i,0,8)
        dfs(x + d[i][0], y + d[i][1]);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    while(cin>>m>>n)
    {
        if (m==0) return 0;
        getchar();
        k = 0;
        fr(i,0,m)
            cin>>grid[i];
        fr(i,0,m)
            fr(j,0,n)
            {

                //cout<<"NIhal"<<endl;
                if (grid[i][j]=='@')k++;
                dfs(i, j);
            }
        cout<<k<<endl;
    }
    return 0;
}
