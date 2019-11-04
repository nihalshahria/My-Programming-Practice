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

using namespace std;
int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin>>a[i];
    for (int i = 0; i < n-1; ++i)
    {
        int ptr = 0;
        while(ptr < n-i)
        {
            if (a[ptr]>a[ptr+1])
                swap(a[ptr], a[ptr+1]);
            ptr++;
        }
    }
    for (int i = 0; i < n; ++i)
        cout<<a[i]<<endl;
    return 0;
}
