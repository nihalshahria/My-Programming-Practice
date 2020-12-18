#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, i;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        long long int N, a=0, j, m=0;
        scanf("%lld", &N);
        if((N%2)!=0)
            a = N-(N/2);
        else
            a = (N/2)+1;
        printf("%lld\n", a);
    }
    return 0;
}
