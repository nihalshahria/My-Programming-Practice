/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, mini = 0, ind, x;
    scanf("%d%d",&n,&k);
    int a[n];
    int cuSum[n];
    for (int i = 0; i < n; ++i){
        scanf("%d",&a[i]);
        if (i == 0) cuSum[i] = a[i], ind = 0;
        else cuSum[i] = a[i] + cuSum[i - 1];
        if(i + 1 >= k){
            if (i + 1 == k) x = cuSum[i], mini = x, ind = 1;
            else if (i + 1 > k) x = cuSum[i] - cuSum[i - k];
            if (x < mini) mini = x, ind=i - k + 2;
        }
    }
    printf("%d\n", ind);
    return 0;
}
