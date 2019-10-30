#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,j;
    scanf("%d",&n);
    for(i=1;i<=30;i++)
    {
        x=x+(5*pow(2,i-1));
        if(n>x&&n<=(x+5*pow(2,i)))
        {
                int c=1;
            for(j=x+1;j<=x+5*pow(2,i);j+(5*pow(2,i-1)))
            {
                if(n>=j&&n<j+(5*pow(2,i-1)))
                   {
                       if(c==1)
                       {
                           printf("Sheldon\n");
                       }
                       else if(c==2)
                       {
                           printf("Leonard\n");
                       }
                       else if(c==3)
                       {
                           printf("Penny\n");
                       }
                       else if(c==4)
                       {
                           printf("Rajesh\n");
                       }
                       else if(c==5)
                       {
                           printf("Howard\n");
                       }
                       break;
                   }
                   else
                   {
                       c++;
                   }
            }
        }
        x=x+(5*pow(2,i));
    }
    return 0;
}
