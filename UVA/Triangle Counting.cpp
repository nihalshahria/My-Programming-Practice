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
long long int arr[1000015], ar2[1000015];
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
    arr[3]=ar2[3]=0, arr[4]=ar2[4]=1;
    long long int n, j=1;
    for (long long int i = 5; i <=1000015; ++i){
    	if (i%2==0){
    		arr[i]=arr[i-1]+ar2[i-1]+j;
    		ar2[i]=ar2[i-1]+j;
    	}
    	else{
    		arr[i]=arr[i-1]+ar2[i-1]+j;
    		ar2[i]=ar2[i-1]+j;
    		j++;
    	}
    }while(cin>>n &&n>2)cout<<arr[n]<<endl;
    return 0;
}