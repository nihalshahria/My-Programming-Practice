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
#define sf(a)           scanf("%lld",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define pb(a)           push_back(a)
#define pll				pair<ll,ll>
#define mp(a,b)         make_pair(a,b)
using namespace std;
int main(){
	int n, m;
	sff(n, m);
	ll a;
	std::map<ll, ll> pos;
	std::vector<ll> v;
	std::queue<pll>q;
	for (int i = 0; i < n; ++i) {
		sf(a);
		q.push(mp(a, 0));
		pos[a] = 1;
	}
	ll sum = 0;
	while (!q.empty()) {
		ll x = q.front().first;
		ll y = q.front().second;
		q.pop();
		if (!m) break;
		if (!pos[x-1]) {
			v.pb(x-1);
			pos[x-1] = 1;
			sum = sum + 1+y;
			q.push(mp(x-1, y+1));
			m--;
		}
		if (!m) break;
		if (!pos[x+1]) {
			v.pb(x+1);
			pos[1 + x] = 1;
			sum = sum + 1+y;
			q.push(mp(x+1, y+1));
			m--;
		}
 
	}
	printf("%lld\n", sum);
	for (int i = 0; i < v.size(); ++i)
		printf("%lld ", v[i]);
	return 0;
}
