#include<stdio.h>
int main()
{
    int T, i, a, b, j;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        int odd = 0;
        scanf("%d%d", &a, &b);
        for(j = a; j<=b; j++)
        {
            if(j%2!=0)
                odd = odd + j;
        }
        printf("Case %d: %d\n", i, odd);
    }
    return 0;
}
