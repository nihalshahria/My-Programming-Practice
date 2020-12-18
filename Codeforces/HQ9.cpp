#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", &s);
    int i, f = 0;
    for(i = 0; i<strlen(s); i++)
    {
        if((s[i]=='H')||(s[i]=='Q')||(s[i]=='9'))
        {
            f = 1;
            printf("YES\n");
            break;
        }
    }
    if(f==0)
        printf("NO\n");
    return 0;
}
