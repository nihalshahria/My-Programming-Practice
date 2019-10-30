/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |    |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________|
*/


#include <bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("d",&a,&b)
#define sfff(a,b,c)     scanf("d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)

using namespace std;

int main(){
    int j, n, a=0, b=0, count = 0;

    cin>>n;
    char s[n];
    //cin>>s;
    for (int i = 0; i < n; ++i)
    {
        cin>>s[i];
        j = i+1;
        if(s[i]=='a') a++;
        else b++;
        if(j%2==0)
        {
            if(a!=b)
            {
                if(min(a,b)==a)
                    for(int k = i-1; k<=i; k++)
                    {
                        if(s[k]=='b') s[k]='a'; count++;
                        break;
                    }
                else
                    for(int k = i-1; k<=i; k++)
                    {
                        if(s[k]=='a') s[k]='b'; count++;
                        break;
                    }
            }
        }
    }
    s[n]='\0';
    cout<< count <<endl;
    cout<< s <<endl;
    //cout<< a<<" "<<b <<endl;
    return 0;
}

