#include<stdio.h>
int main()
{
    int n, i, j,sum1 = 0, sum2=0, count = 0, temp;
    scanf("%d", &n);
    int ar[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum1 = sum1 + ar[i];
    }
    for(i = 0; i<n-1;i++)
        for(j = i+1;j<n;j++)
    {
        if(ar[i]>ar[j])
        {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j]= temp;
        }
    }
    for(i = n-1; i>=0;i--)
    {
        sum2 = sum2+ar[i];
        count = count +1;
        if(sum2>sum1-sum2)
            break;
    }
    printf("%d\n", count);
    return 0;
}
