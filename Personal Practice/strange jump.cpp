#include<stdio.h>
int main()
{
    int n, x, y, i=1, d=0;
    scanf("%d%d%d",&n, &x, &y);
    if(y>x&&n>x)
        printf("-1");
    else
    {
        while(d<n)
        {
            if(i%2==1)
                d=d+x;
            else
                d=d-y;
            i++;
        }
        i--;
        printf("%d",i);
    }
}
