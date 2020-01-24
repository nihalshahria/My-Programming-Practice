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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, x=0;
    while(cin>>n){
        x++;
        if (x!=1)]cout<<endl;
        string name[n], str;
        int tk, net;
        std::map<string, int> m;
        for (int i = 0; i < n; ++i)\{
            cin>>name[i];
            m[name[i]]=0;
        }
        for (int i = 0; i < n; ++i){
            cin>>str>>tk>>net;
            if(net!=0){
                int x = (tk/net);
                m[str]-=(x*net);
                for (int i = 0; i < net; ++i){
                    cin>>str;
                    m[str]+=x;
                }
            }
        }
        for (int i = 0; i < n; ++i)
            cout<<name[i]<<" "<<m[name[i]]<<endl;
    }
    return 0;
}
