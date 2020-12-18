#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,i, n, f=1;
    cin>>n;
    for(i = 0;i<n;i++)
    {
        cin>>v;
        if(v==1)
            f=0;
    }
    if(f==0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}

