#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5], i, j, m, n, sum;
    for(i = 0; i<5; i++)
        for(j = 0; j<5; j++)
    {
        cin>>arr[i][j];
        if(arr[i][j]==1)
        {
            m = i;
            n = j;
            sum = abs(2-m)+abs(2-n);

        }

    }
    cout<<sum<<endl;
    return 0;
}
