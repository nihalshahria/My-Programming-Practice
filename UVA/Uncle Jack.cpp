/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |	   |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________| 
*/


#include <bits/stdc++.h>
using namespace std;


int result[1000000];
int result_size;

void multiply(int n)
{
	int carry = 0;
	for (int i = 0; i < result_size; ++i)
	{
		int prod = result[i]*n + carry;
		result[i] = prod % 10;
		carry = prod / 10;
	}
	while(carry > 0)
	{
		result[result_size] = carry % 10;
		carry = carry / 10;
		result_size++;
	}
}
void power(int n, int d)
{
	result[0] = 1;
	result_size = 1;
	while(d--)
		multiply(n);
	for (int i = result_size-1; i >= 0; --i)
		cout << result[i];
	cout <<'\n';
}


int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, d;
	while(scanf("%d%d", &n, &d))
	{
		if (!n && !d) break;
		else if (d==0) cout << 1 << '\n';
		else power(n, d);	
	}
	return 0;
}