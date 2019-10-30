#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	char str[1000], str2[20];
	gets(str);
	int p,l1,l2;
	cin>>p;
	l1=strlen(str);
	getchar();
	gets(str2);
	l2=strlen(str2);
	for(int i=l1;i>=p-1;--i)
		str[i+l2]=str[i];
	for(int i=p-1,j=0;j<l2;++i,j++)
		str[i]=str2[j];
	cout<<str<<'\n';
	return 0;
}
