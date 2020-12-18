
#include<bits/stdc++.h>

using namespace std;

int main(){


	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	
	float h, u, d, f;
	
	while(cin>>h>>u>>d>>f && h!=0)
	{
		if(h>u && u<d)
			cout << "failure on day 1" << '\n';
		else
		{
			f=f/100*u;
		
		int i;
		float s=0, flag = 0;
		for (i = 1;; ++i)
		{
			if (u>=0)
			{
				s = s+u;
				/* code */
			}
			
			if (s>h)
			{
				flag=1;
				break;
				/* code */
			}
			s = s-d;
			if (s<0)
			{
				flag=0;
				break;
				/* code */
			}
			u = u-f;
			
			//printf("%d %f %f %f \n", i, s, u, f);
			

			/* code */
		}
		if (flag==1)
		{
			printf("success on day %d\n", i);
			/* code */
		}
		else
			printf("failure on day %d\n", i);

	}
}


	



	return 0;


}






