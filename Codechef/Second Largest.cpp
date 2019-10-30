#include<bits/stdc++.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        long long int a, b, c, n;
        scanf("%lld%lld%lld", &a, &b, &c);
        if(((a>b)&&(b>c))||((a<b)&&(b<c)))
            n = b;
        else if(((b>a)&&(a>c))||((b<a)&&(a<c)))
            n = a;
        else if(((a>c)&&(c>b))||((a<c)&&(c<b)))
            n = c;
        printf("%lld\n", n);
    }
    return 0;
}
