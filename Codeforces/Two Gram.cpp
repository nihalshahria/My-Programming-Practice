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
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n,m=0,c;
    cin>>n;
    string s,t;
    cin>>s;
    for (int i = 0; i < n-1; ++i){
        c=1;
        for(int j = i+1; j < n-1; ++j) if(s[j]==s[i] && s[j+1]==s[i+1]) c++;
        if(m<c){
            m=c;
            t=string(1,s[i])+string(1,s[i+1]);
        }
    }
    cout<<t<<endl;
    return 0;
}
