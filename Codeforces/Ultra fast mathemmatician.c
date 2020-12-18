#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105], s2[105];
    int i;
    scanf("%s", s1);
    scanf("%s", s2);
    for(i = 0; i<strlen(s1);i++)
    {
        if(s1[i]!=s2[i])
            printf("1");
        else
            printf("0");
    }
    return 0;

}
