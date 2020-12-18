#include<bits/stdc++.h>
int main()
{
    int t, i, rate;
    scanf("%d%d", &t, &rate);

    for(i = 0; i<t; i++)
    {
        int meal, pi, y, x;
        scanf("%d%d",&meal, &pi);
        x = meal*rate+1300;
        if(pi==meal*rate)
        {
            printf("It's same !!\n");
        }
        else if(pi<x)
        {
            y = x-pi;
            printf("Member %d will give %d tk.\n", i+1, y);
        }

        else
            {
                y = pi-x;
            printf("Member %d will get back %d tk.\n", i+1, y);

            }

    }
    return 0;
}
