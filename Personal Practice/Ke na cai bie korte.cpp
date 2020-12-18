#include<bits/stdc++.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        long long int s, j;
        scanf("%lld", &s);
        long long int k, l, arr[s];
        for(j = 0; j<s; j++)
        {
            scanf("%lld", &arr[j]);
        }
        for(k = 0; k<s; k++)
        {
            long long int counter = 0;
            for(l = 0; l<s; l++)
            {
                if(arr[k]==arr[l])
                {
                    counter = counter + 1;
                }
            }
            if(counter%2!=0)
            {
                printf("Case %d: %lld\n", i, arr[k]);
                break;
            }
        }

    }
}
