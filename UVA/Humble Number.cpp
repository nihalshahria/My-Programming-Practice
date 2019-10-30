#include <bits/stdc++.h>
using namespace std;

long long int a[2147483647]={0};

int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    long long int x = sqrt(2147483647);
    for (long long int i = 2; i <= x; ++i)
        if (a[i]==0)
        {
            cout<< i <<" ";
            for (long long int j = 2; i*j <= 2147483647; ++j)
                a[i*j]=1;
        }
    return 0;
}

