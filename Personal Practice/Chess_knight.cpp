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
#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999

using namespace std;

int main(){
    int n;
    sf(n);
    int a[n+1][n+1];
    int m[8][2] = {-1, -2,
    				1, -2,
    			   -2,  1,
    			   -2, -1,
    			    2,  1,
    			    2, -1,
    			   -1,  2,
    			    1,  2}
    for (int i = 0; i < n+1; ++i)
        for (int j = 0; j < n+1; ++j)
            a[i][j] = 0;
    int move;
    sf(move);
    queue<pii>q;
    q.push(mp(1, 0));
    while(!q.empty){
    	int x = q.front().first, y = q.front().second;


    }
    return 0;
}
