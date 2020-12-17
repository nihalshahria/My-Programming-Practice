#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r){
    if(!r)return 1;
    return (nCr(n-1, r-1)*n)/r;
}
int main(int argc, char const *argv[])
{
    int n, r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
