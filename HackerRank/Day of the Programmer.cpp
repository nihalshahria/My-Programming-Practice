#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int y;
	cin>>y;
	if (y<1918)
	{
		if (y%4==0)
		{
			cout << "12.09."<<y << '\n';
		}
		else
			cout << "13.09."<<y  << '\n';
	}
	else if (y==1918)
	{
		cout << "26.09."<<y  << '\n';
	}
	else
	{
		if (y%400==0 || (y%4==0 && y%100!=0))
		{
			cout << "12.09."<<y << '\n';
		}
		else
			cout << "13.09."<<y  << '\n';
			
	}

	return 0;
}