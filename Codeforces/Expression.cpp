
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	int a, b, c, arr[6];
	cin>>a>>b>>c;
	arr[0]= a+b+c;
	int max = arr[0], i; 
	arr[1]=a*b*c;
	arr[2]= (a+b)*c;
	arr[3]=a*(b+c);
	arr[4]=a*b+c;
	arr[5]=a+b*c;
	for (int i = 0; i < 6; ++i)
	{
		/* code */
		if(max<arr[i])
		max = arr[i];
	}
	cout<<max<<endl;


	



	return 0;


}






			