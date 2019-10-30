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
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    int n, m;
    cin>>n>>m;
    int a[n][m], b[n][m]={0};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>a[i][j];
        }
    }
    int count, ma[100], na[100], x=0,y=0;
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = 0; j < m-1; ++j)
        {
            if(a[i][j]==1 && b[i][j]==1)
                continue;

            else if(a[i][j]==1 && b[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+4][j+1]==1)
            {
                b[i][j]=1;
                b[i][j+1]=1;
                b[i+1][j]=1;
                b[i+1][j+1]=1;
                ma[count]=i+1;
                na[count]=j+1;
                count++;
            }
            else if(a[i][j]==1 && b[i][j]==0 && (a[i][j+1]==0 || a[i+1][j]==0 || a[i+1][j+1]==0))
            {
                cout<<i<<" "<<j<<endl;
                cout<< -1 <<endl;
                return 0;
            }
        }
    }
    cout<< count <<endl;
    for (int i = 0; i < count; ++i)
    {
        cout<< ma[i]<<" "<<na[i] <<endl;
    }
    return 0;
}

