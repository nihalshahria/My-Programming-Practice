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

using namespace std;
#define INF 1000000000

int m,n,a,b,t;
vector<vector<int>> grid (101,vector<int>(101,0));
vector<vector<int>> vals (101,vector<int>(101,INF));
vector<vector<int>> visited (101,vector<int>(101,0));

typedef bool (*comp)(pair<int,int>,pair<int,int>);

bool compare(pair<int,int> a,pair<int,int> b){
    return vals[a.first][a.second] > vals[b.first][b.second];
}

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

void dijkstras(){
    priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq(compare);
    vals[0][0]=grid[0][0];
    pq.push(pair<int,int>(0,0));
    visited[0][0]=1;
    while(!pq.empty()){
        pair<int,int> x = pq.top();
        pq.pop();
        int tempx=x.first,tempy=x.second;
        if(tempx==a&&tempy==b){
            return;
        }
        for(int i=0;i<4;++i){
            int cx = dx[i] + tempx;
            int cy = dy[i] + tempy;
            if(cx<0||cx>=m||cy<0||cy>=n||visited[cx][cy]==1||vals[cx][cy]<grid[cx][cy]+vals[tempx][tempy]){
                continue;
            }
            vals[cx][cy]=grid[cx][cy]+vals[tempx][tempy];
            visited[cx][cy]=1;
            pq.push(pair<int,int>(cx,cy));
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
        scanf("%d %d",&m,&n);
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                scanf("%d",&grid[i][j]);
                vals[i][j]=INF;
                visited[i][j]=0;
            }
        }
        scanf("%d %d %d",&a,&b,&t);
        dijkstras();
        if(vals[a-1][b-1]<=t){
            printf("YES\n");
            printf("%d\n",t-vals[a-1][b-1]);
        }
        else
            printf("NO\n");
    }
    return 0;
}
