#include<stdio.h>
int main()

{
    int n, i, sum =0;
    scanf("%d", &n);
    if(n<1)
    {
        for(i = n; i<=1; i++)
        {
            sum = sum+ i;
        }
    }
    else
        for(i = 1; i<=n; i++)
        {
            sum = sum+ i;
        }
    printf("%d", sum);
    return 0;
}
