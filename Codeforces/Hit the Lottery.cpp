#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin>>n;
    if(n>=100)
    {
        i = n/100;
        count = count + i;
        n= n- i*100;
    }
    if(n>=20)
    {
        i = n/20;
        count = count + (n/20);
        n= n- i*20;
    }
    if(n>=10)
    {
        i = n/10;
        count = count + (n/10);
        n= n- i*10;
    }
    if(n>=5)
    {
        i=n/5;
        count = count + (n/5);
        n= n- i*5;
    }
    if(n>=1)
    {

        count = count + (n/1);

    }
    cout<<count<<endl;
    return 0;
}
