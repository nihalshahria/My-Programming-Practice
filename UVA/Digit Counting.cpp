#include<bits/stdc++.h>
int main()
{
    int i, t, n;
    scanf("%d", &t);
    for(i = 1; i<=t; i++)
    {
        int m, j, p, zero = 0, one=0, two=0, three=0,four=0, five=0, six=0, seven=0, eight=0, nine=0;
        scanf("%d", &n);
        for(j = 1; j<=n; j++)
        {
            p =j;
            while(1)
            {
                if(p==0)
                    break;
                else
                {
                    m=p%10;
                    p = p/10;
                    if(m==0) zero = zero + 1;
                    else if(m==1) one = one +1;
                    else if(m==2) two = two+1;
                    else if(m==3) three = three +1;
                    else if(m==4) four = four+1;
                    else if(m==5) five = five+1;
                    else if(m==6) six = six+1;
                    else if(m==7) seven = seven+1;
                    else if(m==8) eight = eight+1;
                    else if(m==9) nine = nine +1;
                }
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    }
}
