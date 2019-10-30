#include<stdio.h>
int main()
{
    int n, h, i, a, counter = 0;
    scanf("%d%d", &n, &h);
    for(i = 1; i<=n; i++)
    {
        scanf("%d", &a);
        if(h<a)
            counter = counter + 2;
        else
            counter = counter +1;
    }
    printf("%d\n", counter);
    return 0;
}
