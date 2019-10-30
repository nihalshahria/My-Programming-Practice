#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    long long int n, k, num;
    cin>>n>>k;
    vector<long long int>a;
    a.push_back(1);
    for (long long int i = 0; i < n; ++i)
    {
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    if(a[k+1]==a[k] || (k==0 && a[1]==1))
        cout<< "-1" <<endl;
    else
        cout<< a[k] <<endl;
    return 0;
}

