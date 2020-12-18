#include <bits/stdc++.h>
using namespace std;

int a[1000000]={0};

void prime()
{
    for (int i = 2; i <=1000000; ++i)
        if (a[i]==0)
            for (int j = 2; i*j <=1000000; ++j)
                a[i*j]=1;
}
int main(){
    prime();
    int n;
    while(scanf("%d", &n) && n!=0)
    {
        int c=0;
        for (int i = 2; i <= n; ++i)
            if(n%i==0)
                if(a[i]==0)
                    c++;
        printf("%d : %d\n", n, c);
    }
    return 0;
}

