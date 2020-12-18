#include<stdio.h>
int main()
{
    int n, m, count = 0;
    scanf("%d%d", &n, &m);
    int j;
    for(j = 1;;j++)
    {
        if(m==n)
        break;
        else if(m<n)
        {
            count = count + (n - m);
            break;
        }
        else if(m%2==0)
        {
            m = m/2;
            count = count +1;
        }
        else
        {
            m = m+1;
            count = count+1;
        }
    }
    printf("%d\n", count);
    return 0;
}

