/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |    |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________|
*/


#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("d",&a,&b)
#define sfff(a,b,c)     scanf("d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)
#define pi              3.14159265359

int main(){
    int n;
    double r;
    cin>>n>>r;
    double x[n], y[n], sum=0;
    for(int i = 0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        //cout<< x[i]<<" "<<y[i] <<endl;
        if(i==n-1)
        {
            double a,b;
            a=x[i]-x[0];
            a= pow(a,2);
            b=y[i]-y[0];
            b= pow(b,2);
            sum = sum + sqrt(a+b);
            //cout<< sqrt(a+b) <<" "<<sum <<endl;
        }
        if(i!=0)
        {
            double a,b;
            a=x[i]-x[i-1];
            a= pow(a,2);
            b=y[i]-y[i-1];
            b= pow(b,2);
            sum = sum + sqrt(a+b);
            //cout<< sqrt(a+b)<<" "<<sum <<endl;
        }
    }
    //cout<< sum <<endl;
    sum = sum + (2*pi*r);
    cout<<  fixed << setprecision(2) << sum <<endl;
    return 0;
}

