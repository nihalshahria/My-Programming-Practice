#include <bits/stdc++.h>
using namespace std;
int w[1010], cost[1010];
int n, cap, g, sum;
int mw[110];
int dp[1010][1010];
int f(int i, int sum) {
    if (dp[i][sum] >= 0) {
        return dp[i][sum];
    }
    if (i == n){
        return dp[i][sum] = 0;
    }
    int p1, p2;
    if (sum + w[i] <= cap){
        p1 = cost[i] + f(i + 1, sum + w[i]);
    }
    else {
        p1 = 0;
    }
    p2 = f(i + 1, sum);
    dp[i][sum] = max(p1, p2);
    return dp[i][sum];
}

int main() {
    sum = 0;
    memset(w, 0, sizeof(w));
    memset(cost, 0, sizeof(cost));
    memset(mw, 0, sizeof(mw));
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> cost[i];
    }
    for (int i = 0; i < n; ++i){
         cin >> w[i];
    }
    cin>>cap;
    cout << f(0, 0) << endl;
    return 0;
}
/*
7
10 5 15 7 6 18 3
2 3 5 7 1 4 1
15
*/
