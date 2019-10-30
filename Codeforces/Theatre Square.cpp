#include<bits/stdc++.h>
int main()
{
    long long int n, m, a, x = 0, y = 0, c = 0;
    scanf("%lld%lld%lld", &n, &m, &a);
    if(n%a!=0)
    {
        x = (n/a)+1;
    }
    else
        x = n/a;
    if(m%a!=0)
        y = (m/a)+1;
    else
        y = m/a;
    c = x*y;
    printf("%lld", c);
    return 0;
}
