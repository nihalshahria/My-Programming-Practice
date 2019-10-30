#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],j, i, min,max;
    for(i = 0; i<3;i++)
    {
        cin>>arr[i];
        if(i == 0)
            {
                max = arr[i];
                min = arr[i];
            }
            if(arr[i]<min)
                min=arr[i];
            if(arr[i]>max)
                max=arr[i];
    }
    cout<<max-min<endl;


    return 0;
}



