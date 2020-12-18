#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[2000], str1[]={" Sussu "};
    int i;
    gets(str);
    if(str[strlen(str)-1]=='?')
        printf("7\n");
    else
    {
        for(i = 0; i<strlen(str); i++)
        {
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                continue;
            else
                str[i]=' ';
        }
        str[strlen(str)+1]=' ';
        for(i=strlen(str); i>=1; i--)
        {
            str[i]=str[i-1];
        }
        str[0]=' ';
        if(strstr(str, str1)!=0)
            printf("AI SUSSU!\n");
        else
            printf("O cara é bom!\n");
    }

    return 0;

}
