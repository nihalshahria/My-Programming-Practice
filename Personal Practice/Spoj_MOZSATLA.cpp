#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int>v(n + 10, 1), arr(n+10, 0);
    for (int i = 0; i < n - 1; ++i)cin >> arr[i];
    for (int i = n - 2; i >= 0; --i){
        if(arr[i]==0)v[i] = v[i+1];
        else if(arr[i]==2)v[i] = v[i+1]+1;
        else{
            int j = i;
            while(arr[j-1]==1 && j-1>=0)j--;
            int k = 1;
            int x = j;
            while(j<=i && j<n)v[j++] = k++;
            v[j] = max(v[j], k);
            while(j<n-1 && arr[j]!=2){
                if(arr[j]==0){
                    if(v[j+1]==v[j])break;
                    v[j+1] = v[j];
                }
                else {
                    if(v[j+1]>v[j])break;
                    v[j+1] = v[j]+1;
                }
                j++;
            }
            i = x;
        }
    }
    for (int i = 0; i < n; ++i)cout << v[i] << " ";
    cout << "\n";
}
int main() {
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
    }
    return 0;
}
/* 
input:
10
5
1 1 1 1
5
1 2 0 1
10
2 2 2 1 0 1 0 2 2
1
2
1
2
0
2
2
10
1 1 2 2 0 0 1 0 0
4
1 0 0
9
2 2 2 2 1 0 2 2

output:
1 2 3 4 5 
1 2 1 1 2 
4 3 2 1 2 2 3 3 2 1 
1 
1 2 
1 1 
2 1 
1 2 3 2 1 1 1 2 2 2 
1 2 2 2 
5 4 3 2 1 3 3 2 1
 */