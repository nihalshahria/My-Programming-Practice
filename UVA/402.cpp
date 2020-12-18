#include<bits/stdc++.h>
using namespace std;
int arr[1010];
vector<int>v;
void sieve(int n)
{
    v.push_back(2);
    for(int i=3;i*i<=n;i+=2)
    {
        if(arr[i]==0)
        for(int j=i*i;j<=n;j+=2*i)
            arr[j]=1;
    }
    for(int i=3;i<=n;i+=2)if(arr[i]==0)v.push_back(i);
}
int main()
{
 int n,k,c=0;
 cin>>n>>k;
 sieve(n);
 for(int i=0;v[i]<=n;i++)
 {
    // cout<<v[i]<<endl;
     int x=v[i]-1;
     for(int j=0;v[j]<x;j++)
     {
         if(v[j]+v[j+1]==x)
         {
            // cout<<v[j]<<" "<<v[j+1]<<endl;
             c++;
             break;
         }
     }
 }
 // cout<<c<<endl;
 if(c>=k)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 return 0;
}
