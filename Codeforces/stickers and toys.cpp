#include<stdio.h>
int main()
{
    int c, i;
    scanf("%d", &c);
    for(i = 1; i<=c; i++)
    {
        int n, s, t;
        scanf("%d%d%d", &n, &s, &t);
        s=n-s+1;
        t=n-t+1;
        if(s>t)
            printf("%d\n", s);
        else
            printf("%d\n", t);
    }
    return 0;
}
