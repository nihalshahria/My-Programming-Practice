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

    int n;
    while(cin>>n, n)
    {
        //std::vector<int> m;
        multiset<int> m;
        int cost = 0;
        int sum = 0;
        fr(i,0,n)
        {
            int x;
            cin>>x;
            m.insert(x);
        }
        //sort(m.begin(), m.end());
        while(m.size()>1)
        {
            sum = *m.begin();
            //cout<<sum<<endl;
            m.erase(m.begin());
            int y = *m.begin();
            sum = sum + y;
            m.erase(m.begin());
            cost+=sum;
            m.insert(sum);
            //sort(m.begin(), m.end());
        }
        cout<<cost<<endl;
    }
    return 0;
}
