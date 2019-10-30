#include<stdio.h>
int main()
{
    int a, b, c;
    a= 7;
    b=6;
    c = (a<b)? printf("A < B") : (a == b ? printf("A = B") :  printf("A > B"));
    return 0;

}
