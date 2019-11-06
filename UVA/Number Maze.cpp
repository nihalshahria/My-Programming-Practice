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
#define mp(a,b)         make_pair(a,b)
#define INF             9999999

using namespace std;
int vals[1100][1100];
int visited[1100][1100];
int grid[1100][1100];
int f[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
int m, n, a, b;

void dijkstras(){
    //queue < pair < int, int > > q;
    multiset<pair <int, int>> q;
    memset(vals, INF, sizeof(vals));
    memset(visited, 0, sizeof(visited));
    //q.push(mp(1, 1));
    q.insert(mp(1,1));
    visited[1][1] = 1;
    vals[1][1] = grid[1][1];
    while(!q.empty()){
        //pair<int, int>p = q.front();
        pair<int, int>p = *q.begin();
        //q.pop();
        q.erase(q.begin());
        int x = p.first;
        int y = p.second;
        visited[x][y] = 0;
        for (int i = 0; i < 4; ++i)
        {
            int c = x + f[i][0];
            int d = y + f[i][1];
            if (c >= 1 && d >= 1 && c <= m && d <= n && vals[c][d] >= vals[x][y] + grid[c][d])
            {
                vals[c][d] = vals[x][y] + grid[c][d];
                //q.push(mp(c,d));
                q.insert(mp(c,d));
            }
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int k;
    scanf("%d",&k);
    while(k--){
        scanf("%d%d",&m,&n);

        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                scanf("%d",&grid[i][j]);
            }
        }
        int t;
        //scanf("%d %d %d",&a,&b,&t);
        dijkstras();
        cout<<vals[m][n]<<endl;

    }
    return 0;
}
