#include<stdio.h>
int main()
{
    int count = 0, n, m, i;
    scanf("%d%d", &n, &m);

    for(i = 1; ; i++)
    {
        if(i%m==0)
            n = n+1;
        count = count + 1;
        n = n-1;
        if(n==0)
            break;
    }
    printf("%d\n", count);
    return 0;
}
