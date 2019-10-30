#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, f = 1;
    cin>>n>>m;
    int arr[n], sum = m, r;
    for(i = 0; i<n;i++)
    {
        cin>>arr[i];
        sum = sum+ arr[i];
    }
    if(sum%n!=0)
        cout<<"-1"<<endl;
    else
    {
        r = sum/n;
        for(i=0;i<n;i++)
        {
            arr[i]=r-arr[i];
            if(arr[i]<0)
            {
                f=0;
                break;
            }
        }
        if(f==0)
            cout<<"-1"<<endl;
        else
            for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
