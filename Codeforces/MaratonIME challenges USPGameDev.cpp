#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p, q, m, n, r, x;
    double R, W;
    cin>>p>>q>>m>>n;
    r = p*p + q*q;
    x = m*m + n*n;
    R = sqrt(r);
    W = sqrt(x);
    if(R>W)
    {
        cout<<"Wil"<<endl;
    }
    else if(W>R)
    {
         cout<<"Russo"<<endl;
    }
    else
    {
         cout<<"Empate"<<endl;
    }

    return 0;
}
