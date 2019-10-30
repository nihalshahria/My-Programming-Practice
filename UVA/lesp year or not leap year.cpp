#include<bits/stdc++.h>
int main()
{
    long long int year, l, h, b;
    while(scanf("%lld", &year)!=EOF)
    {
        if(((year % 4 == 0) && (year%100!=0))||(year%400==0))
            l = 1;
        else
            l = 0;
        if((l==1)&&(year%55==0))
            b=1;
        else
            b=0;
        if(year%15==0)
            h=1;
        else
            h=0;

        if(b==1)
            printf("This is bulukulu festival year.\n");
        else if(h==1)
            printf("This is huluculu festival year.\n");
        else if(l==1)
            printf("This is leap year.\n");
        else
            printf("This is an ordinary year.\n");
    }
    return 0;
}
