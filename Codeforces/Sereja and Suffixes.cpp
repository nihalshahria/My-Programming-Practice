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
    int n, m, count = 0;
    cin>>n>>m;
    int a[n] = {0}, ar[100010]={0}, rs[n]={0};
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for(int i = n-1; i>=0; --i)
    {
        if(ar[a[i]]==0)
        {
            ar[a[i]]++;
            count++;
        }
        rs[i]= count;
    }
    int num;
    for(int i = 0; i < m; ++i)
    {
        cin>>num;
        cout<<rs[num-1]<<endl;
    }
    return 0;
}

