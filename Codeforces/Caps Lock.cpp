#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, count = 0;
    char str[125];
    scanf("%s", str);
    for(i = 1; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            count++;
    }
    if(count== strlen(str)-1)

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            putchar(tolower(str[i]));
        }
        else
            putchar(toupper(str[i]));

    }
    else
        printf("%s", str);
    return 0;
}
