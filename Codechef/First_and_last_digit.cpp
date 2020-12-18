#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, N = 0, j, i;
    scanf("%lld", &T);
    for(j = 1; j<=T; j++)
    {
        scanf("%lld", &N);
        int  sum = 0;
        for(i = 1;;i++)
        {
            if((i == 1)||(N<10))
            {
                sum = sum + (N%10);
            }

            if((N%10==0)&&(N<10))
                break;
            N = N/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
