#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    while(1)
    {
        char s[1000], t[1000];
        int j=0;
        gets(s);
        if(strcmp(s, "DONE")==0)
            break;
        int l=strlen(s);
        for (int i = 0; i < l; ++i)
        {
            if(s[i]>='A' && s[i]<='Z')
               t[j++]=s[i]+32;
             if(s[i]>='a' && s[i]<='z')
                t[j++]=s[i];
        }
        t[j]='\0';
        //strlwr(t);
        //cout<<t<<endl;
        int f=1;
        for (int i = 0; i < j/2; ++i)
        {
            if(t[i]!= t[j-1-i])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        cout<< "You won't be eaten!" <<endl;
        else
            cout<< "Uh oh.." <<endl;

    }
    return 0;
}

