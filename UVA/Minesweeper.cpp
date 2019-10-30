#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,y,x,t=1,j;
    while(scanf("%d %d",&y,&x)==2)
    {
        if(y==0||x==0)
            break;
        else
        {
            char m[500][500];
            int ans[500][500]={0};
            for(i=0; i<y; i++)
                scanf("%s",&m[i]);
            for(i=0; i<y; i++)
            {
                for(j=0; j<x; j++)
                {
                    if(m[i][j]=='*')
                    {
                        ans[i][j+1]++;
                        ans[i+1][j]++;
                        ans[i+1][j+1]++;
                        ans[i][j-1]++;
                        ans[i-1][j]++;
                        ans[i-1][j-1]++;
                        ans[i+1][j-1]++;
                        ans[i-1][j+1]++;
                    }
                }
            }
            if(t>1)
                printf("\n");
            printf("Field #%d:\n",t++);
            for(i=0; i<y; i++)
            {
                for(j=0; j<x; j++)
                {
                    if(m[i][j]=='*')
                        printf("%c",m[i][j]);
                    else
                        printf("%d",ans[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}