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
#define Pi              acos(-1)
#define INF             9999999


using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, k, mini = 0, ind, x;
    sff(n,k);
    int a[n];
    int cuSum[n];
    for (int i = 0; i < n; ++i){
        sf(a[i]);
        if (i==0) cuSum[i]=a[i],ind=0;
        else cuSum[i] = a[i]+cuSum[i-1];
        if(i+1>=k){
            if (i+1 == k)x=cuSum[i], mini = x, ind=1;
            else if (i+1>k)x = cuSum[i]-cuSum[i-k];
            if (x < mini)mini=x, ind=i-k+2;
        }
    }
    cout<<ind<<endl;
    return 0;
}
