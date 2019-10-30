#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000001];
    int t = 1;
    while(scanf("%s", &str)!=EOF || str[0]!='\n')
    {
        long long int i, n, x, y, min, max;
        scanf("%lld", &n);
        printf("Case %d: \n", t);
        t = t+1;
        for(i = 1; i<=n; i++)
        {
            scanf("%lld%lld", &x, &y);
            if(x>y)
            {
                min = y;
                max = x;
            }
            else
            {
                min = x;
                max = y;
            }
            long long int j;
            int flag = 0;
            for(j = min; j<max; j++)
            {
                if(min == max)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    if(str[j]!= str[j+1])
                    {
                        flag = 1;
                        break;
                    }
                }
                printf("%d\n", flag);
            }
            if(flag==1)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
