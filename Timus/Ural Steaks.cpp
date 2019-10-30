#include<bits/stdc++.h>
int main()
{

    int n ,k, s;
    scanf("%d%d", &n, &k);

        if(n<=k || n==1)
        printf("2");

    else
    {
        s = n*2/k ;
        if(n*2%k!=0)
            s = s+1;
        printf("%d\n", s);

    }
}
