#include<bits/stdc++.h>
using namespace std;
int a[100005],l[100005],r[100005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    l[1]=0;
    r[n]=n+1;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i++)l[i] = (a[i]<=a[i-1])?l[i-1]:i;
    for(int i=n-1;i>=1;i--)r[i] = (a[i]<=a[i+1])?r[i+1]:i;
    // for (int i = 1; i <= n; ++i)cout<<l[i]<<" ";cout<<'\n';
    // for (int i = 1; i <= n; ++i)cout<<r[i]<<" ";cout<<'\n';
    while(m--){
        int x,y;cin>>x>>y;
        if(r[x]>=l[y])cout<<"Yes\n";
        else cout<<"No\n";
    }
return 0;
}
