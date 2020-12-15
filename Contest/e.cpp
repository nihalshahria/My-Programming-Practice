#include "stdio.h"
int main(){
    int n, x = 0;;
    scanf("%d", &n);
    int a[32]={};
    for (int i = 0; i < 32; ++i)
    {
        if(n&(1<<i))a[31-i] = 1;
        else a[31-i] = 0;
    }
    while(a[x]==0)x++;
    for (int i = x; i < 32; ++i)
    {
        printf("%d", a[i]);
    }
}
