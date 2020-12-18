#include<stdio.h>
int main()
{
    int a=2, b=6;
    printf("%d %d %d\n", a&b, a|b, a^b);
    printf("%d %d ", a << 1, a >> 1);
    return 0;
}
