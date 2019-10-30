#include<stdio.h>
int main()
{
    int n, k, t, i, counter = 0;
    scanf("%d%d", &n, &k);
    for(i = 1;i<=n;i++)
    {
        scanf("%d", &t);
        if(t%k == 0)
        {
            counter = counter + 1;
        }
        else
            continue;
    }
    printf("%d", counter);
    return 0;
}
