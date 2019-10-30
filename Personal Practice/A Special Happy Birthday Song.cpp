#include<stdio.h>
#include<string.h>
int main()
{
    char hp[16][10]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int x,i;
    scanf("%d",&x);
    char name[x][101];
    for(i=0; i<x; i++)
        scanf("%s",&name[i]);
    if(x<=16)
    {
        int j=0;
        for(i=0; i<16; i++)
        {
            if(x==j)
                j=0;
            if(x!=j)
            {
                printf("%s: %s\n",name[j],hp[i]);
                j++;
            }
        }
    }
    else if(x>16)
    {
        int k, l, m, n;
        k = x/16 + 1;
        n = 0;
        for(l=1; l<=k; l++)
        {
            for(m=0; m<16; m++)
            {
                if(x==n)
                    n=0;
                if(x!=n)
                {
                    printf("%s: %s\n",name[n],hp[m]);
                    n++;
                }
            }
        }
    }
    return 0;
}
