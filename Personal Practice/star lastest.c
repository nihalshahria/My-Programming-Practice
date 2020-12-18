#include <stdio.h>

int main()
{
    int i,j,k,l,n;

    printf("Enter your desired number:");

    while(scanf("%d", &n) == 1)

    {
        if(n==1)
        {
            printf("*");

        }
        else
        {

            for (i=1; i<=n; i++)
            {
                printf("*");
            }
            printf("\n");

            for(k=1; k<=n-2; k++)
            {
                printf("*");

                for (j=1; j<=n-2; j++)
                {
                    printf(" ");
                }
                printf("*");

                printf("\n");
            }
            for (i=1; i<=n; i++)
            {
                {
                    printf("*");
                }
            }
        }
        printf("\nEnter your desired number:");
    }
}
