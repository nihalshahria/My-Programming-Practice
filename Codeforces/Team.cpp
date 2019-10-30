#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar1[n], ar2[n], ar3[n], i, sum, count = 0;
    for(i = 0; i<n; i++)
    {
        scanf("%d%d%d", &ar1[i], &ar2[i], &ar3[i]);
        if(ar1[i]+ar2[i]+ar3[i]>1)
            count = count + 1;
    }
    printf("%d\n", count);
    return 0;
}
