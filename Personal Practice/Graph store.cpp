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
#define sff(a,b)        scanf("d",&a,&b)
#define sfff(a,b,c)     scanf("d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)

using namespace std;

int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    vector<int>v[nodes+15];
    for (int i = 0; i < edges; ++i)
    {
        int x, y;
        cin>>x>>y;
        //if (v[x].find(y) == v[x].end()) { //x not yet compressed
        v[x].pb(y);
        //if (v[y].find(x) == v[y].end())
        //v[y].pb(x);
    }
    for(int i = 1;i <= nodes;++i)
    {
        cout << "vacency list of node " << i << ": ";
        for(int j = 0;j < v[i].size();++j)
            {
            if(j == v[i].size() - 1)
                    cout << v[i][j] << endl;
            else
                cout << v[i][j] << " --> ";
    }
    }
    return 0;
}

