#include<stdio.h>
int main()
{
    int w, x, y, z, d, first, second, third, i = 1;
    while(1)
    {
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if(w==0 && x==0 && y==0 && z==0)
            break;
        else
        {
            first = w-x;
            second = y-x;
            third = y-z;
            if(first<0)
                first = 40 + first;
            if(second<0)
                second = second + 40;
            if(third<0)
                third = third + 40;

            d = 720+first*9+360+second*9+third*9;
            printf("%d\n", d);
        }
    }
    return 0;
}
