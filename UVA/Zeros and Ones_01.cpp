/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |    |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________| 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    char str[1000001];
    while(scanf("%s", str)== 1)
    {
        int n, l, x, min, max, y, i, j;
        scanf("%d", &n);
        printf("Case %d:\n", t++);
        for(l = 1; l<=n; l++)
        {
            scanf("%d%d", &x, &y);
            if(x>strlen(str) || y>strlen(str))
            {
                printf("No\n");
            }
            else if(x == y)
            {
                printf("Yes\n");
            }
            else if(x<y)
            {
                min = x;
                max = y;
                int f= 1;
                for(i = min; i<=max-1; i++)
                {

                    if(str[i] != str[i+1])
                    {
                        f=0;
                        break;
                    }
                }
                if(f==0)
                    printf("No\n");
                else
                    printf("Yes\n");
            }
            else
            {
                min = y;
                max = x;
                int f= 1;
                for(i = min; i<=max-1; i++)
                {

                    if(str[i] != str[i+1])
                    {
                        f=0;
                        break;
                    }
                }
                if(f==0)
                    printf("No\n");
                else
                    printf("Yes\n");
            }

        }
    }
    return 0;
}