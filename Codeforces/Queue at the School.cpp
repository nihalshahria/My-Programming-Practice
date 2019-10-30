#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, j;
    scanf("%d%d", &n, &t);
    char str[n], c;
    scanf("%s", str);
    for(i = 0;i<t;i++)
        for(j=0;j<strlen(str);j++)
    {
        if(str[j]=='B' && str[j+1]=='G')
        {
            str[j]='G';
            str[j+1]='B';
            j++;
        }
    }
    printf("%s\n",str);
    return 0;
}
