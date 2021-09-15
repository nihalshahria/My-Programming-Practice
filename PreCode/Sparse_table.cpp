#include <bits/stdc++.h>
using namespace std;
const int mx = 100005;
int sp[mx][32];
int Log[mx];
int main()
{
    Log[1] = 0;
    for (int i = 2; i < mx; i++)Log[i] = Log[i / 2] + 1;
    int n, q;
    cin >> n>>q;
    int arr[n] = {}, k = Log[n]+1;
    int sp[n][k+1]={};
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        sp[i][0]=arr[i];
    }
    /* Cell filling */
    for(int j = 1; j<=k; j++){
        for(int i = 0; i+(1<<j)<=n; i++){
            sp[i][j] = min(sp[i][j-1], sp[i+(1<<(j-1))][j-1]);  //range min
            // sp[i][j] = max(sp[i][j-1], sp[i+(1<<(j-1))][j-1]);  //range max
            // sp[i][j] = sp[i][j-1] + sp[i+(1<<(j-1))][j-1];      //range sum
        }
    }
    cout<<endl;
    while(q--){
        int l, r;
        cin>>l>>r;

        /* range min */
        int j = Log[r-l+1];
        int mini = min(sp[l][j], sp[r-(1<<j)+1][j]);
        cout<<mini<<endl;

        /* Range sum */
        // long long int sum = 0;
        // for(int j = k; j>=0; j--){
        //     if((1<<j)<=(r-l+1)){
        //         sum += sp[l][j];
        //         l += (1<<j);
        //     }
        // }
        // cout<<sum<<endl;
    }
}