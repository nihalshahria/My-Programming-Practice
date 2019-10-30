
#include<bits/stdc++.h>

using namespace std;

int main(){


    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n, i, d=0, a=0;
    string t;
    cin>>n;
    cin>>t;
    for(i=0;i<n;i++)
    {
        if(t[i]=='A')
            a++;
        else
            d++;
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;


    



    return 0;


}






