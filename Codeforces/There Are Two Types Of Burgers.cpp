#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    int t;
    cin>>t;
    while(t--)
    {
        int b, m, c, pm, pc;
        cin>>b>>m>>c>>pm>>pc;
        int sum = 0;
        if(pc>pm)
        {
            int x = min(c, b/2);
            sum = sum + x*pc;
            b = b - x*2;
            //cout<< b <<endl;
            x = min(m, b/2);
            sum = sum + x*pm;
        }
        else
        {
            int x = min(m, b/2);
            sum = sum + x*pm;
            b = b - x*2;
            //cout<< b <<endl;
            x = min(c, b/2);
            sum = sum + x*pc;
        }
        cout<< sum <<endl;
    }
    return 0;
}

