/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
*/
 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1], d[n+1];
	for (int i = 0; i <=n; ++i) d[i]=0;
	vector<int> v, empty;
	for (int i = 1; i <= n; ++i){
		scanf("%d",&a[i]);
		d[a[i]]=1;
		if (!a[i]) 
			empty.push_back(i);
	}
	for (int i = 1; i <= n; ++i)
		if (d[i]==0) 
			v.push_back(i);
	for (int i = 0; i < empty.size()-1; i+=1)
		if(v[i]==empty[i] || v[i+1]==empty[i+1]) 
			swap(v[i], v[i+1]);
	int x = 0;
	for (int i = 1; i <= n; ++i){
		if (a[i]==0)
			cout<<v[x++]<<" ";
		else
			cout<<a[i]<<" ";
	}
	return 0;
}
