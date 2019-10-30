#include<bits/stdc++.h>
int main()
{
    int T, i;
    scanf("%d", &T);
    for(i = 1; i<=T; i++)
    {
        char str[100];
        scanf("%s", &str);
        if(strlen(str)<=10)
            printf("%s\n", str);
        else
            printf("%c%d%c\n", str[0], strlen(str)-2, str[strlen(str)-1]);
    }
    return 0;

}
