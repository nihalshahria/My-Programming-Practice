#include<bits/stdc++.h>
int main()
{
    int i, t = 1;
    char str[10];
    for(i = 1;; i++)
    {
        scanf("%s", &str);
        if(str[0]=='*')
            break;
        else if(str[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n", t);
        else
            printf("Case %d: Hajj-e-Asghar\n", t);
        t++;
    }
    return 0;
}
