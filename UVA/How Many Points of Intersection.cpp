#include<bits/stdc++.h>
int main()
{
    long long int i, a, b, m;
    for(i = 1; ;i++)
    {
        scanf("%lld%lld", &a, &b);
        if(a==0 && b==0)
            break;
        else
            m = a*(a-1)*b*(b-1)/4;
        printf("Case %lld: %lld\n", i, m);
    }
    return 0;
}
