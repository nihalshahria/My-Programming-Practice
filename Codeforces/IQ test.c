#include<stdio.h>
int main()
{
    int even=0, odd=0, t , i, arr[150];
    scanf("%d", &t);
    for(i = 0;i<t; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
            even = even + 1;
        else
            odd =odd+1;

    }
    if(even>odd)
        for(i = 0; i<t; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\n", i+1);
            break;
    }
    }
    else
    for(i = 0; i<t; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n", i+1);
            break;
    }
    }


  return 0;
}
