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
#define sf(a)           scanf("%lld",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             99999999

using namespace std;

int main(){
	int n, m;
	sff(n,m);
	long long int a[n];
	std::map<long long, int> pos;
	std::vector<long long int> v;
	for (int i = 0; i < n; ++i){
		sf(a[i]);
		pos[a[i]] = 1;
	}
	long long int sum = 0, x = 0;
	while(m>0){
		x++;
		for (int i = 0; i < n; ++i)
		{
			if (pos[a[i]-x]==0)
			{
				v.pb(a[i]-x);
				pos[a[i]-x]=1;
				sum = sum + x;
				m--;	
			}
			if (m==0)
				break;
			if (pos[a[i]+x]==0)
			{
				v.pb(a[i]+x);
				pos[a[i]+x]=1;
				sum = sum + x;	
				m--;
			}
		}
	}
	printf("%lld\n", sum);
	for (int i = 0; i < v.size(); ++i)
	{
		//cout<<v[i]<<" ";
		printf("%lld ", v[i]);
	}
	return 0;
}