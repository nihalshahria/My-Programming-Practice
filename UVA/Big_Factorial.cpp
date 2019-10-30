#include <bits/stdc++.h>
using namespace std;


int result[1000000];
int result_size;


void multiply(int x)
{
	int carry=0;
	for (int i = 0; i < result_size; ++i)
	{	
		int prod = result[i]*x + carry;
		result[i] = prod % 10;
		carry = prod / 10;
	}
	while(carry)
	{
		result[result_size] = carry % 10;
		carry = carry / 10;
		result_size++;
	}
}

void factorial(int n)
{
	result[0] = 1;
	result_size = 1;

	for (int x = 2; x <= n; ++x)	
		multiply(x);

	cout << n <<"!\n";
	for (int i = result_size-1; i >= 0; --i)
		cout << result[i];
	cout <<'\n';
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n, t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		factorial(n);
	}
	

	return 0;
}