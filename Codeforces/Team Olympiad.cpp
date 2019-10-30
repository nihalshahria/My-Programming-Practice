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
	int n;
	cin>>n;
	int num, tm1=0, tm2=0, tm3=0, one[n]={0}, two[n]={0}, three[n]= {0}, m;
	for (int i = 0; i < n; ++i)
	{
		cin>>num;
		if (num==1)
		{
			tm1++;
			one[tm1-1]=i+1;
		}
		else if (num==2)
		{
			tm2++;
			two[tm2-1]=i+1;
		}
		else
		{
			tm3++;
			three[tm3-1]=i+1;
		}
        m = min(min(tm1, tm2), tm3);
	}
	cout<<m<<endl;
	for(int i=0; i<m; i++)
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	

	return 0;
}