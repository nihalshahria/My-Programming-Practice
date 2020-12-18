#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    int n, k;
    cin>>n>>k;
    int a[n], sum  = 0, ch = 0, d;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        ch = ch+a[i];
        if(ch<8)
        {
            sum = sum + ch;
            ch=0;
        }
        else
        {
            sum = sum + 8;
            ch-=8;
        }
        if(sum>=k)
        {
            cout<< i+1 <<endl;
            return 0;
        }
    }
    cout<< -1 <<endl;
    return 0;
}

