#include<bits/stdc++.h>
int main()
{
    long long int n, i, arr[2000], sum = 0;
    scanf("%lld", &n);
    for(i = 0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%lld", sum);
    return 0;
}
