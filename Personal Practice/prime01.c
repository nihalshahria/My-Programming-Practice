#include<stdio.h>
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, i, s, remain;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("%d is not prime", n);
    }
    else if(n == 2)
    {
        printf("%d is a prime",n);
    }
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            remain = n % i;

            if(remain == 0)
            {
                s = 1;
                break;
            }
        }

        if(s == 1)
        {
            printf("%d is not a prime", n);
        }
        else
        {
            printf("%d is a prime", n);

        }
    }
    return 0;
}
