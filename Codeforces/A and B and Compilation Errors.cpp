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
//#include<bits/stl_iterator.h>
using namespace std;
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    vector<long long int>v1, v2, v3;
    //std::vector<int>::iterator it;
    int n, num;
    cin>>n;
    for (int i = 0; i < n; ++i){
        cin>>num;
        v1.push_back(num);
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n-1; ++i){
        cin>>num;
        v2.push_back(num);
    }
    sort(v2.begin(), v2.end());
    int f=1;
    for (int i = 0; i < n-1; ++i){
        if(v1[i]!=v2[i]){
            cout<< v1[i] <<endl;
            f=0;
            break;
        }
    }
    if(f==1) cout<< v1[n-1] <<endl;
    for (int i = 0; i < n-2; ++i){
        cin>>num;
        v3.push_back(num);
    }
    sort(v3.begin(), v3.end());
    f=1;
    for (int i = 0; i < n-2; ++i){
        if(v2[i]!=v3[i]){
            cout<< v2[i] <<endl;
            f=0;
            break;
        }
    }
    if(f==1) cout<< v2[n-2] <<endl;
    return 0;
}

