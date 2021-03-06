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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m, num;
    multiset<int> b, g;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>num;
        b.insert(num);
    }
    multiset<int>::iterator ib, ig, itb, itg;
    cin>>m;
    for (int i = 0; i < m; ++i)
    {
        cin>>num;
        g.insert(num);
    }
    int c=0;
    for (ib = b.begin(); ib != b.end(); ++ib)
    {
        int boy = *ib;
        for (ig = g.begin(); ig != g.end(); ++ig)
        {
            int grl = *ig;
            if(grl>boy && (abs(grl-boy)>1))
                break;
            else if (abs(grl-boy)<=1)
            {
                c++;
                g.erase(ig);
                break;
            }
        }
    }
    cout<< c <<endl;
    return 0;
}
