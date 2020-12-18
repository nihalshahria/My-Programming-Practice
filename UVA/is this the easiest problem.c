#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        long long int x, y, z;
        scanf("%lld%lld%lld", &x, &y, &z);
        if((x+y<=z)||(y+z<=x)||(z+x<=y))
            printf("Case %d: Invalid", i);
        else if(x==y && y==z)
            printf("Case %d: Equilateral", i);
        else if(x==y||x==z||y==z)
            printf("Case %d: Isosceles", i);
        else
            printf("Case %d: Scalene", i);
    }
    return 0;
}
