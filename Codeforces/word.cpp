#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i, m=0 ,n = 0;
    char str[125];
    scanf("%s", str);
    for(i = 0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
            m++;
        else
            n++;
    }
    if(m<n)
        for(i = 0; i<strlen(str); i++)
        str[i]= toupper(str[i]);
    else
        for(i = 0; i<strlen(str); i++)
        str[i]= tolower(str[i]);
    printf("%s", str);
    return 0;

}
