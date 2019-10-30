#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i=1;
    cin>>t;
    while(i<=t)
    {long long int s, a, b, c, x;
    cin>>s>>a>>b>>c;
    x = s/c;
    x= x+ x/a*b;
    cout<<x<<endl;
    i++;
    }
    return 0;
}
