#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    scanf("%lld", &n);
    long long int arr[n], j = 0, k, l, m;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    m = arr[0];
    for(i=0; i<n; i++)
        if(m<=arr[i])
        {
            m = arr[i];
        }
    for(i=0; i<n; i++)
    {
        if(m == arr[i])
            j = j+1;
    }
    printf("%lld", j);
    return 0;

}
