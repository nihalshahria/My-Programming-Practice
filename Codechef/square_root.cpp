#include<stdio.h>
#include<math.h>
int main()
{
    int T, N,i;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        scanf("%d", &N);
        N = sqrt(N);
        printf("%d\n", N);

    }
    return 0;
}
