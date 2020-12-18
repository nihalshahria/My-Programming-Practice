
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	char s1[200], s2[200], s3[400];
	scanf("%s %s %s", &s1, &s2, &s3);
	if (strlen(s1)+strlen(s2)!=strlen(s3))
	{
		/* code */
		cout<<"NO"<<endl;
	}
	else
	{
		int i, j, arr[200]={0}, f=1, arr1[200]={0};
		for (int i = 0; i < strlen(s1); ++i)
		{
			/* code */
			
			arr[s1[i]]++;
		}
		for (int i = 0; i < strlen(s2); ++i)
		{
			/* code */
			
			arr[s2[i]]++;
		}
		for (int i = 0; i < strlen(s3); ++i)
		{
			/* code */
			
			arr1[s3[i]]++;
		}
		for (int i = 0; i < 100; ++i)
		{
			/* code */
			if(arr[i]!=arr1[i])
			{
				f=0;
				break;
			}
		}
		if(f==0)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';

	}
	return 0;
}

