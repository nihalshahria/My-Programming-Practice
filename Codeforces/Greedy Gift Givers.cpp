#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

int n, y=0;
while(cin>>n){
y++;
if(y!=1)cout<<endl;
string name[n],str;
int tk,net;
std::map<string,int>m;
for(int i=0;i<n;++i){
cin>>name[i];
m[name[i]]=0;
}
for(int i=0;i<n;++i){
cin>>str>>tk>>net;
if(net!=0){
int x=(tk/net);
m[str]-=(x*net);
for(int i=0;i<net;++i){
cin>>str;
m[str]+=x;
}
}
}
for(int i=0;i<n;++i)
cout<<name[i]<<" "<<m[name[i]]<<endl;
}
return 0;
}
