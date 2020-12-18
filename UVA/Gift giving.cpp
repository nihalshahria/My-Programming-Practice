#include<bits/stdc++.h>
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        char str1[n][25], giv[25], str2[n][25];
        int sum[n]={0}, don, x, y, i, j, k;


        for(i = 0; i<n; i++)
        {
            scanf("%s", str1[i]);

        }

        for(i = 0; i<n; i++)
        {
            scanf("%s %d%d", giv, &don, &x);
            if(x!=0)
            {
                y = don/x;

                for(j = 0; j<n; j++)
                {
                    if(strcmp(str1[j], giv)==0)
                    {
                        sum[j]=don-x*y;
                        break;
                    }
                }

                for(j = 0; j<x; j++)
                {
                    scanf("%s", str2[j]);

                    for(k = 0; k<n; k++)
                    {
                        if(strcmp(str2[j], str1[k])==0)
                        {
                            sum[k] = sum[k]+y;
                            break;
                        }
                    }
                }
            }
        }

        for(i = 0; i<n; i++)
        {
            printf("%s %d\n", str1[i], sum[i]);
        }

        printf("\n\n");

    }
    return 0;
}
