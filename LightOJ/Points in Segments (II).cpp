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
int main() {
    int t, z = 1, n, q, val, x[50005], y[50005];
    scanf("%d",&t);
    while (t--) {
        printf("Case %d:\n", z++);
        scanf("%d %d",&n,&q);
        for (int i = 0; i <= 50004; ++i)x[i]=-1,y[i]=-1;
        for (int i = 1; i <= n; ++i)scanf("%d %d",&x[i],&y[i]);
        sort(x, x + n + 1),sort(y, y + n + 1);
        for (int i = 1; i <= q; i++) scanf("%d",&val),printf("%d\n",(upper_bound(x, x + n + 1, val) - x)-(lower_bound(y, y + n + 1, val) - y));
    }
    return 0;
}
