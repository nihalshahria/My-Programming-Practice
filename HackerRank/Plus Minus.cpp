#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    double pos=0, neg=0, zero=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0)
            pos = pos + 1;
        else if(arr[i]<0)
            neg = neg +1;
        else
            zero = zero + 1;
    }
    printf("%0.6lf\n", pos/n);
    printf("%0.6lf\n", neg/n);
    printf("%0.6lf\n", zero/n);

    return 0;
}
