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
int n, k;
std::vector<pii> v[1010];

int time(int f, int t, int ct){
    int dis = abs(f-t)*10, rem;
    if (f < t){
        rem = ct % dis;
        return (dis-rem)%dis;
    }
    else
        return ct%dis;
}

int dijkstra(){
    multiset<pii>q;
    q.insert(mp(0,1));
    while(!q.empty()){
        pii p = *q.begin();
        q.erase(q.begin());
        if(p.second == k)
            return p.first;
        for(int i=0; i < v[p.second].size(); ++i){
            pii p1 = v[p.second][i];
            //cout<<"NIHAL"<<endl;
            printf("%d %d %d %d\n",p.first,time(p.second,p1.second,p.first),p1.first, p1.second);
            q.insert(make_pair(p.first + time(p.second, p1.second,p.first) + p1.first, p1.second));
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    sff(k,n);
    fr(i,0,n){
        int a, b;
        sff(a,b);
        v[a].push_back(mp((b-a)*5, b));
        v[b].push_back(mp((b-a)*5, a));
    }
    printf("%d\n", dijkstra());
    return 0;
}
