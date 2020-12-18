#include<stdio.h>
#include<math.h>


int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        float d, v, u, t1, t2, t;
        scanf("%f%f%f", &d, &v, &u);
        if((v == u)||(u == 0)||(v==0)||(v>u))
        {
            printf("Case %d: can't determine\n", i);
        }
        else
        {
            t1 = d/u;
            if(v>u)
            {
                t2 = d/(sqrt(v*v-u*u));
            }
            else
                t2 = d/(sqrt(u*u-v*v));
            if(t1>t2)
                t = t1-t2;
            else
                t = t2-t1;
            printf("Case %d: %0.3f\n", i, t);
        }
    }
    return 0;
}
