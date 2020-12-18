#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"total number of operand="<<endl;
    cin>>n1;
    cout<<"total number of operator="<<endl;
    cin>>n2;
    char a[n1+n2+5];
    getchar();
    gets(a);
    int s[n1],x=0,r;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            s[x]=a[i]-'0';
            x++;
        }
        else
        {
            if(a[i]=='+')
            {
                r=s[x-2]+s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='-')
            {
                r=s[x-2]-s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='*')
            {
                r=s[x-2]*s[x-1];
                s[x-2]=r;
              x=x-1;
            }
            else if(a[i]=='/')
            {
                r=s[x-2]/s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='^')
            {
                r=pow(s[x-2],s[x-1]);
                s[x-2]=r;
                x=x-1;
            }
        }
    }
    cout<<s[1]<<endl;
}
