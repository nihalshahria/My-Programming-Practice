#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    char str[1000];
    int i,p1,l, ln, j;
    gets(str);
    l = strlen(str);
    cin>>p1>>ln;
    //cout << strlen(str)-(p2-p1) << '\n';
    for(i=p1+ln-1, j=0;i<l;i++, j++)
    {
        str[p1-1+j]=str[i];
    }
    str[p1+j-1]='\0';
    //cout << strlen(str) << '\n';
    cout << str << '\n';
    return 0;
}
//nihalshahria
//l = 12
//p1 = 3
//ln = 4
