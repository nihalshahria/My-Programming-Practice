#include <bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    int j=1;
    cin>>t;
    getchar();
    while(t--)
    {
        char s[30], t[30];
        gets(s);
        //cout<<strlen(s)<<endl;
        gets(t);
        //cout<<strlen(t)<<endl;
        if(strcmp(s, t)==0)
            printf("Case %d: Yes\n", j++);
        else
        {
            char p[30];
            int l = strlen(s), x=0;
            for (int i = 0; i < l; ++i)
            {
                if(s[i] != ' ')
                {
                    p[x]=s[i];
                    x++;
                }
            }
            p[x]='\0';
            //cout<< strlen(p) <<endl;
            if(strcmp(t, p)==0)
                printf("Case %d: Output Format Error\n", j++);
            else
                printf("Case %d: Wrong Answer\n", j++);
        }
    }
    return 0;
}

