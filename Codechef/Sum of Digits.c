#include<stdio.h>
int main()
{

    int T, i;
    long long int N, j;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        int sum = 0;
        scanf("%lld", &N);
        for(j = N; j>0; j--)
        {
            sum =sum + (N%10);
            N = N/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
