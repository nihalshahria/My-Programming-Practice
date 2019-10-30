#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,r1,r2;
    cin>>n>>m>>a>>b;
    r1=n*a;
    if(n%m==0)
        r2=(n/m)*b;
    else
        r2=((n/m)*b)+min(b,(n-n/m*m)*a);
        //cout<< (n-n/m)*a <<endl;
    if(r1>r2)
        cout<<r2<<endl;
    else
        cout<<r1<<endl;
    return 0;
}
//5 2 2 3
