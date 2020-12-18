#include<stdio.h>
int main()
{
    int s, t, a, b, m, n, ap=0, orr = 0;
    scanf("%d%d%d%d%d%d", &s, &t, &a, &b, &m, &n);
    int ar1[m], ar2[n], i;
    for(i = 0; i<m; i++)
    {
        scanf("%d", &ar1[i]);
        if((a+ar1[i]>=s)&&(a+ar1[i]<=t))
            ap = ap+1;
    }
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar2[i]);
        if((b+ar2[i]>=s)&&(b+ar2[i]<=t))
            orr = orr+1;
    }
    printf("%d\n%d", ap, orr);
    return 0;
}
