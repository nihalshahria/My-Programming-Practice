#include<stdio.h>
#include<string.h>
int main()
{
    char str[125], temp;
    scanf("%s", &str);
    int j, i, count = 0;
    for(i=0; i<strlen(str)-1; i++)
        for(j = i; j<strlen(str); j++)
    {
        if(str[i]>str[j])
        {
            temp = str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    for(i = 0; i<strlen(str); i++)
    {
        if(str[i]!=str[i+1])
            count = count +1;
    }
    if(count%2!=0)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;

}
