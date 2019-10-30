#include<bits/stdc++.h>
int main()
{
    int a = 0, b = 0, arr1[3], arr2[3], i;
    for(i = 0; i<3; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i<3; i++)
    {
        scanf("%d", &arr2[i]);
        if(arr1[i]>arr2[i])
            a = a+1;
        else if(arr1[i]<arr2[i])
            b = b+1;
        else
            continue;
    }
    printf("%d %d", a, b);
    return 0;
}
