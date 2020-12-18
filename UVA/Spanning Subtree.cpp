#include<stdio.h>
int main()
{
    int t, i=1;
    while(1)
    {
        scanf("%d", &t);
        if(t==0)
            break;
        else
            printf("Case %d: %d\n", i, t/2);
        i++;
    }
    return 0;
}
