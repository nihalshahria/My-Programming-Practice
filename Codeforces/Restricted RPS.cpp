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

    int t;
    cin>>t;
    while(t--)
    {
        float n;
        cin>>n;
        int r, p, s;
        cin>>r>>p>>s;
        int r1 = r, p1 = p, s1 = s;
        string b;
        cin>>b;
        //cout<<b;
        int R = 0, P = 0, S = 0, w = 0;
        for (int i = 0; i < n; ++i)
        {
            if (b[i]=='R')
            {
                if(p>0)
                {
                    p--;
                    w++;
                }
            }
            else if (b[i]=='P')
            {
                if (s>0)
                {
                    s--;
                    w++;
                }
            }
            else
            {
                if (r>0)
                {
                    r--;
                    w++;
                }
            }
        }
        int m = ceil(n/2);
        if (w>=m)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < n; ++i)
            {
                if (b[i]=='R')
                {
                    if(p1>0)
                    {
                        cout
                    }
                }
            }
        }
        else
    }
    return 0;
}
