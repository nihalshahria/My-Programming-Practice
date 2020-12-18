#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    long long int h, n, t=0;
    cin>>h>>n;
    //cout<< h <<endl;
    long long int a[n], sum = 0, f=1;
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum+a[i];
        if(h+sum<=0)
        {
            f=0;
        }
    }

    if(sum>=0 && f!=0)
        cout<< "-1" <<endl;
    else
    {
        sum = sum-sum-sum;
        f=1;
        long long int i = 0;
        t=(h/sum-1)*n;
        cout<< t <<endl;
        h=h-(h/sum*sum)+sum;
        cout<< h <<endl;
        while(h>0)
        {
            h=h+a[i++];
            t++;
            if(i==n)
                i=0;
        }
        cout<< t <<endl;
    }
    return 0;
}

