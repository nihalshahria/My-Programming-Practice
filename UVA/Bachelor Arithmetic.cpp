#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    while(1)
    {
        long long int s, b;
        cin>>b>>s;
        if(b==0 && s==0)
            break;
        if(b<=1)
            cout<<"Case "<<i<<": :-\\"<<endl;
        else if(b>s)
            cout<<"Case "<<i<<": :-("<<endl;
        else
            cout<<"Case "<<i<<": :-|"<<endl;
        i++;
    }
    return 0;
}
