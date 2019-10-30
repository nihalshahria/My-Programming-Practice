#include<stdio.h>
int main()
{
    int a, i, n, m;
    scanf("%d", &a);
    for(i=a; ;i++)
    {
        n = i;
        int sum = 0;
        for(m = 1; ;m++)
        {
            sum = sum+(n%10);
            n = n/10;
            if(n==0)
                break;
        }
        if(sum%4==0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;

}
