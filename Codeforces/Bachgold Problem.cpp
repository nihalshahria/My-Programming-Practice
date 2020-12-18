#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum = 0, count = 0, arr[100010];
    cin>>n;
    if(n==0)
    {
        cout<<count<<endl;
        cout<<"0"<<endl;

    }
    else
    {
        for(i = 0;; i++)
        {
            if(n==sum)
            {
                break;
            }
            else if(n==sum+3)
            {
                sum = sum+3;
                arr[i]=3;
                count++;
            }
            else
            {
                sum = sum+2;
                arr[i] = 2;
                count++;
            }

        }
        cout<<count<<endl;
        for(i=0; i<count; i++)
        {
            cout<<arr[i]<< " ";
        }
    }
    return 0;


}
