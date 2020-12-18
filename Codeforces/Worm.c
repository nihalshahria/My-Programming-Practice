#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar1[n], m;
    for(i = 0; i<n;i++)
    {
        scanf("%d", ar1[i]);
    }
    scanf("%d", &m);
    int ar2[m], j, sum=0;
    for(i=0; i<m;i++)
    {
        scanf("%d", &ar2[i]);
    }
    for(i=0; i<m;i++)
    {
        for(j = 0; j<n; j++)
        {
            sum = sum+ar1[j];
            if(sum>=ar2[i])
            {
                printf("%d\n", j+1);
                break;
            }
        }

    }
    return 0;
}
