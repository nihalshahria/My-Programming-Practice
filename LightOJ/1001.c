#include<stdio.h>
int main()
{
    int T, a = 0,b = 0,c = 0, i;
    scanf("%d", &T);
    for(i = 1; i<=T;i++)
    {
        scanf("%d", &a);
        if(a<=10)
            {
                a = a;
                b = 0;
            }
        else
        {
            b = a-10;
            a = 10;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
