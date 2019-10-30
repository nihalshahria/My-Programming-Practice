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

	int n, m;
	while(cin>>m)
	{
		cin>>n;
		getchar();
		if (m==0)
			return 0;
		char s[m][n];
		int a[m][n]={0};
		//cout << a[m-1][n-1] << '\n';
		for (int i = 0; i < m; ++i)
			cin>>s[i];
		/*for (int i = 0; i < m; ++i)
		{
			cout << s[i] << '\n';
			
		}*/
		int x=0;
		for (int i = 0; i < m; ++i)
			for (int j = 0; j < n; ++j)
			{
				if (s[i][j]=='@')
				{
					if (s[i-1][j-1]=='@' && a[i-1][j-1]<x+1)
						a[i][j]=a[i-1][j-1];
					else if(s[i-1][j+1]=='@' && a[i-1][j+1]<x+1)
						a[i][j]=a[i-1][j+1];
					else if(s[i+1][j-1]=='@' && a[i+1][j-1]<x+1)
						a[i][j]=a[i+1][j-1];
					else if(s[i+1][j+1]=='@' && a[i+1][j+1]<x+1)
						a[i][j]=a[i+1][j+1];
					else if (a[i][j]==0)
					{
						a[i][j]=x+1;
						x++;
					}
					if (s[i-1][j+1]=='@' && a[i][j]<a[i-1][j+1])
						a[i-1][j+1]=a[i][j];
					if (s[i][j-1]=='@' && a[i][j]<a[i][j-1])
						a[i][j-1]=a[i][j];	
					if (s[i][j+1]=='@' && a[i][j]<a[i][j+1])
						a[i][j+1]=a[i][j];
					if (s[i+1][j-1]=='@' && a[i][j]<a[i+1][j-1])
						a[i+1][j-1]=a[i][j];
					if (s[i+1][j]=='@' && a[i][j]<a[i+1][j])
						a[i+1][j]=a[i][j];
					if (s[i+1][j+1]=='@' && a[i][j]<a[i+1][j+1])
						a[i+1][j+1]=a[i][j];	
				}
			}
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << a[i][j] << ' ';
			}
			cout<<endl;
		}
			int ma=0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
			     ma = max(ma, a[i][j]);
			}
		}
		cout << ma << '\n';
	}
}