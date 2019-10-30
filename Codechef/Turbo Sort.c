#include<stdio.h>
int main()
{

    long long int N[5000], t, l, i, j, x, k;
    scanf("%lld", &t);
    for(l = 0; l<t; l++)
    {
        scanf("%lld", &N[l]);
    }
    for(i=0; i<t-1; i++)
    {
        for(j=i+1; j<t; j++)
        {
            if(N[i]>N[j])
            {
                x = N[i];
                N[i]=N[j];
                N[j]=x;
            }
        }
    }
    for(k=0; k<t; k++)
    {
        printf("%lld\n", N[k]);
    }
    return 0;
}
