#include<bits/stdc++.h>
int main()
{
    long long int arr[5], arr2[5], i, j, sum = 0, x;
    for(i = 0; i<5; i++)
        scanf("%lld", &arr[i]);
    for(i = 0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    for(j = 0; j<5; j++)
        arr2[j] = sum - arr[j];
    for(i=0; i<5-1; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr2[i]>arr2[j])
            {
                x = arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=x;
            }
        }
    }
    printf("%lld %lld", arr2[0], arr2[4]);
    return 0;
}
