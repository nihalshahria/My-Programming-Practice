
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int n, k, j=0;
	cin>>n>>k;
	int arr[n], arr1[200]={0}, i;
	for (int i = 0; i <n; ++i)	
	{		
		cin>>arr[i];
		arr1[i]=arr[i];
	}
	sort(arr, arr+n);
	int sum = 0, count = 0;
	if(arr[0]>k)
	{
		cout << count << '\n';
		
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			if(sum+arr[i]<=k)
			{
				sum = sum+arr[i];
				count++;
			}
			else
				break;
		}
		cout << count << '\n';
		for (int i = 0; i < count; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(arr[i]==arr1[j])
				{
					cout<<j+1<<" ";
					arr1[j]=0;
					break;
				}
			}
		}
	}


	



	return 0;


}






