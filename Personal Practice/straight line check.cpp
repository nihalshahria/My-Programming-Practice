#include<bits/stdc++.h>
int main()
{
    long long int a, b, c, d, e, f, g;
    scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e, &f);
    g=(a*d)+(c*f)+(e*b)-(b*c)-(d*e)-(f*a);
    if(g==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
