#include<bits/stdc++.h>
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	int sp[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>sp[i];
		/* code */
	}
	sort(sp, sp+n);
	int q;
	cin>>q;
	int pr[q], ans[q];
	for (int i = 0; i < q; ++i)
	{
		cin>>pr[i];
		if(pr[i]<sp[0])
			ans[i]=0;
		else
		{
			int end=n-1, beg=0, mid;
			
			while(beg<=end)
			{

				
			mid = (beg+end)/2;
				if(sp[mid]==pr[i])
				{
					ans[i]=mid+1;
					break;
				}
				else if (sp[mid]<pr[i])
				{
					beg=mid+1;
					ans[i]=mid+1;
					/* code */
				}
				else if(sp[mid]>pr[i])
				{
					end = mid-1;
				}
			}
		}
		/* code */
	}
	for (int i = 0; i < q; ++i)
	{
		cout << ans[i] << '\n';
		/* code */
	}

	return 0;
}