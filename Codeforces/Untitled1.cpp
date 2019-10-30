#include<stdio.h>
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    long long int n,i,x=0,s;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
      s=n%10;
      if(s==4||s==7)
      {
          x++;
      }
      n=n/10;
      if(n==0)
      {
          break;
      }
    }
    if(x==4||x==7)
    {
        printf("YES\n");
    }
    else
        {
        printf("NO\n");
    }
    return 0;
}