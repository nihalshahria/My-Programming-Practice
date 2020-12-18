#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    int n;
    cin>>n;
    long long int a[n], t = 0;
    long double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    sum = ceil(sum/2);
    int i;
    for (i = 0;; ++i)
    {
        t += a[i];
        if(t >=sum){
          cout<< i+1 <<endl;
          return 0;
        }
    }

    return 0;
}

