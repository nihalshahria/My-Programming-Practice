#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar1[n], ar2[n], ar3[n], s1 = 0, s2 = 0, s3 = 0;
    for(i= 0; i<n; i++)
    {
        scanf("%d%d%d", &ar1[i], &ar2[i], &ar3[i]);
        s1 = s1+ ar1[i];
        s2 = s2+ ar2[i];
        s3 = s3+ ar3[i];
    }
    if(s1==0 && s2==0 && s3==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
