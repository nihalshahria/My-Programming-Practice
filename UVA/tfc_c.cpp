#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n, k;
        cin>>n>>k;
        //cout<<n<<" "<<k;
        double x[1500], y[1500];
        for(long long int i=0; i<2*n; i++)
            cin>>x[i]>>y[i];

        double x1, y1, x2, y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;

        double s=0, dis=0, a1=0, a2=0;
        cout<<"dis = "<<dis<<endl;
        cout<<"a1 = "<<a1<<endl;
        cout<<"a2 = "<<a2<<endl;
        for(long long int i=0; i<2*n;i++)
        {
            a1=sqrt((x[i]-x1)*(x[i]-x1)+(y[i]-y1)*(y[i]-y1));
            a2=sqrt((x[i]-x2)*(x[i]-x2)+(y[i]-y2)*(y[i]-y2));
            cout<<"a1 = "<<a1<<endl;
            cout<<"a2 = "<<a2<<endl;
            dis = a1+a2;

            if(i==0)
            {
                s = dis;
            }
            else
            {
                if(s>dis)
                    s = dis;
            }
            cout<<"dis = "<<dis<<endl;

        }
        cout<<"s = "<<s<<endl;
        double l;
        l = s*k;
        //cout<<l<<endl;
        printf("%0.6lf\n", l);
    }
    return 0;
}
