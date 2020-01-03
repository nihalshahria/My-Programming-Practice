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
#include<bits/stdc++.h>
#define sf(a)   scanf("%d",&a)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        sf(n);
        int a[n],f=0,x,y,i;
        for (i=0;i<n;i++){sf(a[i]);if(i>0)if(abs(a[i]-a[i-1])>1)f=1,x=i,y=i+1;}
        printf((!f)?"NO\n":"YES\n%d %d\n",x,y);
    }
}		 
