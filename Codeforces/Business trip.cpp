#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int k;
	cin>>k;
	int ar[15];
	for (int i = 0; i < 12; ++i)
	{
		cin>>ar[i];
		/* code */
	}
	sort(ar, ar+12);
	int sum=0, c=0;
	for (int i = 11; i>=0; i--)
	{
		if(k<=sum)
		{
			cout << c << '\n';
			return 0;
		}
		sum=sum+ar[i];
		c++;
		if(k<=sum)
		{
			cout << c << '\n';
			return 0;
		}
		//cout << sum<<" " <<c<< '\n';
		/* code */
	}
	if (sum<k)
	{
		cout << "-1" << '\n';
		/* code */
	}


	return 0;
}