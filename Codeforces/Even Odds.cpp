#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long int n, k;
    cin>>n>>k;
    if(k<=(n+1)/2)
    {
        cout << 2*k-1 << '\n';
    }
    else
    {
        cout << (k-(n+1)/2)*2 << '\n';
    }
    return 0;
}