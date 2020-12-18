#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n], d, m, c=0, sum=0, p=0, f=1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>d>>m;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(n+1-i<m)
            {
                break;
            }
            sum=sum+ar[i+j];
            p++;
            if(p==m)
            {
                if(sum==d)
                {
                    c++;
                }
                sum=0;
                p=0;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
