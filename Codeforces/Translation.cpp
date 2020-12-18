#include<bits/stdc++.h>

using namespace std;
int main()
{
    string t, s;
    getline(cin,t);
    reverse(t.begin(), t.end());
    getline(cin,s);
    if(t==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
