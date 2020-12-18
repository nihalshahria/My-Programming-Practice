#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar1[n], m;
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar1[i]);
        if(i >= 1)
        {
            ar1[i] += ar1[i-1];
        }
    }

    scanf("%d", &m);
    int ar2[m], j;
    for(i=0; i<m; i++)
    {
        scanf("%d", &ar2[i]);
    }
    for(i=0; i<m; i++)
    {
        if(ar1[n/2]>=ar2[i])
        {
            if(ar1[n/4]>=ar2[i])
            {
                for(j = 0; j<=n/4; j++)
                {
                    if(ar1[j]>=ar2[i])
                    {
                        printf("%d\n", j+1);
                        break;
                    }
                }

            }
            else
            {
                for(j = n/4; j<=n/2; j++)
                {
                    if(ar1[j]>=ar2[i])
                    {
                        printf("%d\n", j+1);
                        break;
                    }
                }
            }
        }

        else
        {
            if(ar1[3*n/4]>=ar2[i])
            {
                for(j = n/2; j<=3*n/4; j++)
                {
                    if(ar1[j]>=ar2[i])
                    {
                        printf("%d\n", j+1);
                        break;
                    }
                }
            }
            else
                for(j = 3*n/4; j<=n; j++)
                {
                    if(ar1[j]>=ar2[i])
                    {
                        printf("%d\n", j+1);
                        break;
                    }
                }
        }

}


return 0;
}
