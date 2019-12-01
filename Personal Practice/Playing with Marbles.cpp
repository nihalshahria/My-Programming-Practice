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
#define pf(a)           printf("%d\n", a);
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
#define mx		10000010
using namespace std;

std::vector <int> prime;
bool is_composite[mx];
void seive () {
    std::fill (is_composite, is_composite + mx, false);
    for (int i = 2; i < mx; ++i){
        if (!is_composite[i])
            prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < mx; ++j) {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
}

int factor(int x){
	int c = 0, z = sqrt(x);
	for (int i = 1; i <= z; ++i)
		if (x%i==0)
			c++;
	return c;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    seive();
    int x;
    while(sf(x) && x!=0){
    	int t = x, c = 0, y;
	printf("%d = ", x);
	if (is_composite[t]==0){
 	    y=1;
 	    printf("%d", t);
	}
	else{
	    y = factor(x);
	    while(1){
 	        int i;
		for (i = 0; prime[i] <= t; ++i)
	 	    if (t%prime[i]==0){
			c++;
			break;
		    }
		t = t/prime[i];
		if (c==1)
		    printf("%d ", prime[i]);
		else
		    printf("* %d ", prime[i]);
		if (is_composite[t]==0){
		    c++;
		    printf("* %d", t);
		    break;
		}
	    }
	}
		printf("\nWith %d marbles, %d different rectangles can be constructed.\n", x, y);
    }
	return 0;
}
