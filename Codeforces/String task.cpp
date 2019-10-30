#include<stdio.h>
#include<string.h>
int main()
{
    char str[150];
    scanf("%s", str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]=='U')||(str[i]=='u')||(str[i]=='O')||(str[i]=='o')||(str[i]=='I')||(str[i]=='i')||(str[i]=='E')||(str[i]=='e')||(str[i]=='A')||(str[i]=='a')||(str[i]=='Y')||(str[i]=='y'))
        {
            continue;
        }
        else
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]= str[i]-('A'-'a');
            printf(".%c", str[i]);
        }
    }
    return 0;
}
