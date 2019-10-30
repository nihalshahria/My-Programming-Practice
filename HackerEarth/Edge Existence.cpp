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
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][n]={0};
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin>>x>>y;
        a[x][y]++;
        a[y][x]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        if(a[x][y]>0 || a[y][x]>0)
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }
    return 0;
}
