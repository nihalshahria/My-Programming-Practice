#include<bits/stdc++.h>
int main()
{
    long long int a, b, c, n, i;
    scanf("%lld%lld%lld", &n, &a, &b);
    //printf("%lld %lld ", a, b);
    for(i = 3; i<=n; i++)
    {
        c = a+b;
        a=b;
        b = c;
        //printf("%lld ", c);

    }
    printf("%lld ", c);
    return 0;
}
