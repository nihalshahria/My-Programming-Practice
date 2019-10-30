#include<stdio.h>
int main()
{
    int x1, x2, v1, v2, i;
    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
    if(v1!=0 || v2!=0)

    {
        if((x1>x2 && v2>v1)||(x2>x1 && v1>v2))
        {
            int h, l, t, d;
            if(x1>x2)
            {
                h = x1;
                d = v1;
                l = x2;
                t = v2;
            }
            else
            {
                h = x2;
                d = v2;
                l = x1;
                t = v1;
            }
            int s1 = h, s2 = l;
            for(i =1;;i++)
            {
                if(s1==s2)
                {
                    printf("YES");
                    break;
                }
                else if(s2>s1)
                {
                    printf("NO");
                    break;
                }
                else
                {
                    s1 = s1+ d;
                    s2 = s2+ t;
                }
            }
        }
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}
