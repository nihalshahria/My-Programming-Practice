#include<stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if(a<b)
            {
                printf("<\n");
            }
        else if(a>b)
            {
                printf(">\n");
            }
        else
            {
                printf("=\n");
            }
    }
    return 0;
}
