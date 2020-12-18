#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1, j;
    while(scanf("%d", &n)==1 && n>=0)
    {
        int m;
        if(n == 0 || n == 1)
        {
            printf("Case %d: 0\n", i);
            i++;
        }
        else
        {
            for(j = 1;;j++)
            {
                m = pow(2,j);
                if(m>n)
                {
                    printf("Case %d: %d\n", i, j-1);
                    i++;
                }
            }
        }
    }
    return 0;
}

