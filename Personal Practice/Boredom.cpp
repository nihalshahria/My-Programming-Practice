#include<bits/stdc++.h>
using namespace std;
long long int a[100010]={0};
int main()
{
    long long int n, num, mx=0 ;
    cin>>n;
    for(long long int i = 0; i < n; ++i)
    {
        cin>>num;
        a[num]=a[num]+num;
    }
    long long int m = 0;
    long long int x;
    for(long long int i = 1; i<100010; ++i)
    {
        x = m;
        m = max(m, mx+a[i]);
        mx= x;
    }
    cout<< m <<endl;
    return 0;
}

