#include <bits/stdc++.h>
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    char s[100005],*p;
    gets(s);
    if((p=strstr(s,"AB")) && strstr(p+2,"BA"))
    {
      printf("YES\n");
    }
    else if((p=strstr(s,"BA"))&&strstr(p+2,"AB"))
    {
      printf("YES\n");
    }
    else
      printf("NO\n");
    return 0;
}