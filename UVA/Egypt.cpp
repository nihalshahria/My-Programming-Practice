#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, z, a, b, c;
    while(1)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(c==0 && b==0 && a== 0)
            break;
        x = a*a;
        y = b*b;
        z = c*c;
        if((x+y==z)||(y+z==x)||(x+z==y))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
