
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	char str[2000], t[2000], c;
	int count=1, i, j=0, k;
	gets(str);
	if (strlen(str)==2)
	{
		count = 0;
	}
	else if (strlen(str)==3)
	{
		count=1;
		/* code */
	}
	else

	{
		for (int i = 1; i < strlen(str)-1; ++i)
	{
		if(str[i]!=' ' && str[i]!= ',')
		{
			t[j]=str[i];
			j++;
		}
		/* code */
	}
	for (int i = 0; i < j-1; ++i)
	{	
		for (int k = i+1; k < j; ++k)
		{
			/* code */
			if(t[i]>t[k])
			{
				c = t[i];
				t[i]= t[k];
				t[k]=c;
			}
		}

	}
	for (int i = 0; i < j-1; ++i)
	{
		/* code */
		if(t[i]!=t[i+1])
		{
			count++;
		}
	}
	}
	cout << count << '\n';



	return 0;


}






