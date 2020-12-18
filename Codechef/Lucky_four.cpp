#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, N = 0, j, i;
    scanf("%lld", &T);
    for(j = 1; j<=T; j++)
    {
        scanf("%lld", &N);
        long long int  sum = 0;
        for(i = 1;;i++)
        {
            if(N%10==4)
            {
                sum = sum + 1;
            }

            if((N%10==0)&&(N<10))
                break;
            N = N/10;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
