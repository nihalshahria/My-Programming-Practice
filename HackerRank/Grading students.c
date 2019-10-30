#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]<38)
            ar[i]= ar[i];
        else
        {
            if(ar[i]%5>=3)
                ar[i]=ar[i]+(5-(ar[i]%5));
        }
    }
    for(i = 0; i<n; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}
