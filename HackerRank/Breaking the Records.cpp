#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ar[n], min, max, p=0, q=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0)
        {
            min=max=ar[i];
        }
        else
        {
            if(max<ar[i])
            {
                max=ar[i];
                p++;
            }
            if(min>ar[i])
            {
                min=ar[i];
                q++;
            }
        }
    }
    cout<<p<<' '<<q<<endl;
    return 0;
}
