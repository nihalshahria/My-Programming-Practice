/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |	   |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________|
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while(scanf(" %s", s)!=EOF)
    {
        int p=1, mir=1;
        int l=strlen(s);
        char m[l];
        for (int i = 0; i < l; ++i)
        {
            if(s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='F'||s[i]=='G'||s[i]=='K'||s[i]=='N'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='4'||s[i]=='6'||s[i]=='7'||s[i]=='9')
            {
                mir=0;
                break;
            }
            else if (s[i]=='E') m[l-1-i]='3';
            else if (s[i]=='3') m[l-1-i]='E';
            else if (s[i]=='J') m[l-1-i]='L';
            else if (s[i]=='L') m[l-1-i]='J';
            else if (s[i]=='S') m[l-1-i]='2';
            else if (s[i]=='2') m[l-1-i]='S';
            else if (s[i]=='Z') m[l-1-i]='5';
            else if (s[i]=='5') m[l-1-i]='Z';
            else if (s[i]=='0')
            {
                m[l-1-i]='O';
                s[i]='O';
            }
            else m[l-1-i]=s[i];
        }
        m[l]='\0';
        if (strcmp(m, s)!=0) mir=0;
        for(int i=0; i<l/2;i++)
            if(s[i]!=s[l-1-i])
            {
                p=0;
                break;
            }
        cout <<s;
        if (p==1 && mir==1) cout<< " -- is a mirrored palindrome.\n\n";
        else if (mir==1) cout<< " -- is a mirrored string.\n\n";
        else if (p==1) cout<< " -- is a regular palindrome.\n\n";
        else cout<< " -- is not a palindrome.\n\n";
    }
    return 0;
}
