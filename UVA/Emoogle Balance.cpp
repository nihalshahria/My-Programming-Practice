#include<stdio.h>
int main()
{
    int n, i, j = 1;
    while(scanf("%d", &n)!=0)
    {
        if(n == 0)
            break;
        else

        {
            int ar, zero = 0, m = 0;
            for(i = 0; i<n; i++)
            {
                scanf("%d", &ar);
                if(ar>0 && ar<=99)
                    m = m+1;
                else
                    zero = zero+1;
            }
            printf("Case %d: %d\n", j, m-zero);
            j++;
        }
    }
    return 0;
}
