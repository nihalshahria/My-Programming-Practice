#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
    if(n==1) return 1;
    else return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<1<<endl;
    else cout<<factorial(n)<<endl;
    return 0;
}
