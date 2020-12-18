#include<bits/stdc++.h>
int main()
{
    int n, i;
    long long int arr[15], sum = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum +arr[i];

    }
    printf("%lld", sum);
    return 0;
}
