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
    long long int k, i, j, l, m, p, min, max;
    while(scanf("%lld%lld", &i, &j)!=EOF)
    {
        long long int n=0;
        if(i>j)
        {
            min = j;
            max = i;
        }
        else
        {
            min = i;
            max = j;
        }
        long long int counter;
        for(k = min; k<=max; k++)
        {
            m = k;
            counter=0;
            for(p =1; ; p++)
            {
                if(m == 1)
                {
                    counter = counter + 1;
                    break;
                }
                else if(m%2!=0)
                {
                    m = 3*m+1;
                    counter = counter + 1;
                }
                else
                {
                    m = m/2;
                    counter = counter + 1;
                }
            }
            if(counter>n)
                n = counter;
        }
        printf("%lld %lld %lld\n", i, j, n);
    }
    return 0;
}
