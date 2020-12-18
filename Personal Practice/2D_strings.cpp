#include<bits/stdc++.h>
int main()
{
    int i, arr[10];
    char str[5][10];
    for(i = 0; i<5; i++)
        scanf("%s %d", str[i], &arr[i]);
    for(i = 0; i<5; i++)
        printf("%s %d\n", str[i], arr[i]);
    return 0;
}
