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
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	long long int n, i;
	while(1)
	{
		cin>>n;
		queue<int>v;
		if (n==0)return 0;
		if (n==1)
		{
			cout << "Discarded cards:"<<endl;
			cout << "Remaining card: "<< n << '\n';
		}     
		else
		{
			for (i = 1; i <=n; ++i)v.push(i);
			long long int j=0;
			cout << "Discarded cards: ";
			cout << v.front();
			v.pop();
			v.push(v.front());
			v.pop();
			while(v.size()>1)
			{
				cout <<", "<< v.front();
				v.pop();
				v.push(v.front());
				v.pop();
				
			}
			cout << '\n';

			cout << "Remaining card: "<<v.front()<< '\n';
		}	
	}
	return 0;
}
