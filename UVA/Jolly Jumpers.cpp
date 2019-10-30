#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    while(scanf("%d", &n)!=EOF)
    {
        int ar1[n], dif;
        int f = 1, a[3000]={0};
        for(i = 0; i<n; i++)
        {
            scanf("%d",&ar1[i]);
            if(i!=0)
            {
                dif=abs(ar1[i]-ar1[i-1]);
                a[dif]++;
            if(dif>=n || dif==0)
                f=0;
            if(a[dif]>=2)
                f = 0;
            }
        }
        if(f==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
