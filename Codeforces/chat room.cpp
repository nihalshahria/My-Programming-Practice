#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i, count = 0;
    scanf("%s", &str);
    for(i = 0; i<strlen(str); i++)
    {
        if(count==0)
        {
            if(str[i]=='h')
                count++;
        }
        else if(count==1)
        {
            if(str[i]=='e')
                count++;
        }
        else if(count==2)
        {
            if(str[i]=='l')
                count++;
        }
        else if(count==3)
        {
            if(str[i]=='l')
                count++;
        }
        else if(count==4)
        {
            if(str[i]=='o')
                count++;
        }
    }
    if(count ==5)
        printf("YES\n");
    else
        printf("NO");
    return 0;
}
