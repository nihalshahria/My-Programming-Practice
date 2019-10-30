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
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    while(1)
    {
        int s=0;
        cin>>n;
        if (n==0)break;
        //if (n==1)cout << n << '\n';
        for (int i = 0;; ++i)
        {
            s=pow(2,i);
            if (s==n)
            {
                cout << n << '\n';
                break;
            }
            else if (s>n)
            {
                cout << n-(s%n) << '\n';
                break;
            }
        }
    }
    return 0;
}