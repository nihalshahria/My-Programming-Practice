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
#define sf(a)               scanf("%d",&a)
#define fr(i,x,n)           for(int i=x;i<n;i++)
using namespace std;
int main(){
    int n;
    while(sf(n)!=EOF){
        int a[n+1][n+1], cumRow[n+1][n+1], cumAll[n+1][n+1];
        fr(j,0,n+1)a[0][j]=cumRow[0][j]=cumAll[0][j]=0,a[j][0]=cumRow[j][0]=cumAll[j][0]=0;
        fr(i,1,n+1)fr(j,1,n+1)sf(a[i][j]),cumRow[i][j]=cumRow[i][j-1]+a[i][j],cumAll[i][j]=cumAll[i-1][j]+cumRow[i][j];
        int sum = -9999999;
        fr(i,1,n+1)fr(j,1,n+1)fr(x,0,j)fr(y,0,i)sum=max(sum,(cumAll[i][j]-cumAll[i][x]-cumAll[y][j]+cumAll[y][x]));
        printf("%d\n", sum);
    }
    return 0;
}
