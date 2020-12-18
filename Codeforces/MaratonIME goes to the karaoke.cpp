#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    int i, a =0 ,b =0, c=0, d=0, e=0, f=0, g=0;
    scanf("%s", str);
    for(i = 0; i<strlen(str); i++)
    {
        if(str[i]=='A')
        {
            a = a+1;
            if(str[i+1]!='A')
            {
                printf("A%d", a);
                a = 0;
            }

        }
        else if(str[i]=='B')
        {
            b = b+1;
            if(str[i+1]!='B')
            {
                printf("B%d", b);
                b = 0;
            }

        }
        else if(str[i]=='C')
        {
            c = c+1;
            if(str[i+1]!='C')
            {
                printf("C%d", c);
                c = 0;
            }

        }
        else if(str[i]=='D')
        {
            d = d+1;
            if(str[i+1]!='D')
            {
                printf("D%d", d);
                d = 0;
            }
        }
        else if(str[i]=='E')
        {
            e = e+1;
            if(str[i+1]!='E')
            {
                printf("E%d", e);
                e = 0;
            }

        }
        else if(str[i]=='F')
        {
            f = f+1;
            if(str[i+1]!='F')
            {
                printf("F%d", f);
                f = 0;
            }

        }
        else if(str[i]=='G')
        {
            g = g+1;
            if(str[i+1]!='G')
            {
                printf("G%d", g);
                g = 0;
            }

        }
    }

        return 0;
}
