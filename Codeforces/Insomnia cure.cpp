#include<stdio.h>
int main()
{
    int  i, k, l , m ,n, d, count = 0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    for(i = 1; i<=d; i++)
    {
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0))
            count = count + 1;
    }
    printf("%d\n", count);
    return 0;
}
