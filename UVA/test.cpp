#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		long long int m, l;
		for (long long int i = 2;; ++i)
		 {
		 	int flag=1;
		 	for (long long int j = 0; j < i; ++j)
		 	{
		 		int yes=0, no=0;
		 		for (int k = 0; k < n; ++k)
		 		{
		 			long long int p = (a[k]-j)%i;
		 			//cout << a[k]<<" "<<j<<" "<<i<<" "<<p << '\n';
		 			if (p==0) yes++;
		 			else no++;
		 		}
		 		//cout << yes<<" "<<no << '\n';
		 		if(yes>=no)
		 		{
		 			flag = 1;
		 			m=i;
		 			l=j;
		 			break;
		 		}
		 	}
		 	if (flag==1)
		 	{
		 		break;
		 	}
		 	else
		 		flag=1;
		 }
		 cout << m<<" "<<l << '\n'; 
	}

	return 0;
}