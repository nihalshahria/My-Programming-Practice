#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char s1[1010],s2[1010],t;
    int i,j=0,x=1;
    //getchar();
    gets(s1);
    //cout<<s1<<endl;
    for(i=1;i<strlen(s1)-1;i++)
    {
        if(s1[i]!=' '&&s1[i]!=',')
        {
            s2[j]=s1[i];
            j++;
        }
    }
    //cout << s2 << '\n';
    if(j==0)
    {
        printf("0\n");
    }
    else{
            for(i=0;i<j-1;i++)
            {
                for(int k=i+1;k<j;k++)
                {
                    if(s2[i]>s2[k])
                    {
                        t=s2[i];
                        s2[i]=s2[k];
                        s2[k]=t;
                    }
                }
            }
    for(i=0;i<j-1;i++)
    {
       if(s2[i]!=s2[i+1])
       {
           x++;
       }
    }
    printf("%d\n",x);
 
    }
 
    return 0;
}