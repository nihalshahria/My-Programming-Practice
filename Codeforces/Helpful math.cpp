#include<bits/stdc++.h>
int main()
{
    int i, j;

    char str[110], min, hold;
    scanf("%s", &str);
    if(strlen(str)==1)
        printf("%s", str);
    else

    {
        for(i = 0; i<=strlen(str)-3; i=i+2)
            for(j = i+2; j<=strlen(str)-1; j=j+2)
            {
                if(str[i]>str[j])
                {
                    hold = str[i];
                    str[i] = str[j];
                    str[j] = hold;
                }
            }
            printf("%s", str);
}
    return 0;
}
