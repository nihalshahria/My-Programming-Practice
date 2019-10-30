#include<stdio.h>
int main()
{
    int k, n, o=0, p=0;
    scanf("%d%d",&k, &n);
    int i, ar[n], sum = 0, m = 0;
    for(i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        o =o +ar[i];
        if(o>=k)
            o = o-k;
        else
        {
            o = o -(o%k);
        }
    }
    printf("%d", o);
    return 0;
}
