#include<stdio.h>
#include<math.h>
int main()
{
    double p, n, k;
    while(scanf("%lf%lf", &p, &n)!=EOF)
    {
        k = pow(n, 1/p);
        printf("%.0lf\n", k);
    }
    return 0;
}
