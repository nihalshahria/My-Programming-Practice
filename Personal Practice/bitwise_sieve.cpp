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
#define pf(a)           printf("%d\n", a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999
#define mx							100000000
using namespace std;

int prime[mx/32+2];

bool ck(int n, int pos){
	return (n & (1 << pos));
}

int Set(int n, int pos){
	return n=(n | (1<<pos));
}

void sieve(){
		for (int i = 3; i <= sqrt(INF); i  += 2)
				if (!ck(prime[i/32], i%32))
						for (int j = i*i; j <= INF; j += 2*i)
								prime[j/32] = Set(prime[j/32], j%32);					
		pf(2);
		for (int i = 3; i < 100; i+=2)
				if (!ck(prime[i/32], i%32))
						pf(i);
}

int main() {
		sieve();		    
  	return 0;
}

