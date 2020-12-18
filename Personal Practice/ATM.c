#include<stdio.h>
int main()
{
    int a;
    double balance, c;
    scanf("%d%lf", &a, &balance);
    if((a%5==0)&&(a+0.5<balance))
    {
        printf("%0.2lf", balance-(a+0.5));
    }
    else
        printf("%0.2lf", balance);
    return 0;
}
