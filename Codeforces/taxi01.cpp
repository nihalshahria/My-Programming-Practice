#include<stdio.h>
int main()
{
    int n,sum = 0, count = 0, one = 0, two = 0, three = 0;
    scanf("%d", &n);
    int ar[n], i, j;
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum=sum+ ar[i];
    }
    if(sum%4==0)
        count = sum/4;
    else
        count = (sum/4)+1;
    printf("%d\n", count);
    return 0;
}
