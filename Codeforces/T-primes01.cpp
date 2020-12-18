#include<bits/stdc++.h>

using namespace std;

int main()
{

    

    	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    	#endif

    
    long long int t, i;
    cin>>t;
    long long int arr[1000010], r, d, s;
    for (int i = 0; i < t; ++i)
    {
        cin>>arr[i];
        r = sqrt(arr[i]);
        s = r*r;
        if (s==arr[i])
        {
            if(r<2)
                arr[i]=0;
            else if (r==2)
            {
                arr[i]=1;
            }
            else
            {
                long long int j, f=0;
                for (int j = 2; j <=sqrt(r); ++j)
                {
                    if(r%j==0)
                    {
                        f=1;
                        break;
                    }
                }
                if (f==0)
                {
                    arr[i]=1;
                }
                else
                    arr[i]=0;
            }
        }
        else
            arr[i]=0;

    }
    for (int i = 0; i < t; ++i)
    {
        if (arr[i]==1)
        {
            cout << "YES" << '\n';
        }
        else if(arr[i]==0)
            cout << "NO" << '\n';
    }
    return 0;
}


