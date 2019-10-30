#include<bits/stdc++.h>
using namespace std;

int digit_sum(int p)
{
    int i, n=0, m=0;
    for(i = 1;;i++)
    {
        n = n+(p%10);
        p = p/10;
        if(p==0)
            break;
    }
    if(n<10)
        return n;
    else
        return digit_sum(n);
}

int main()
{
    char str[20];
    while(gets(str))
    {
        if(str[0]=='0')
            break;
        stringstream ss(str);
        int sum = 0, i, num;
        vector<int>v;
        while(ss>>num)
        {
            v.push_back(num);
            sum = sum+num;
        }


        if(sum>9)
        {
            sum = digit_sum(sum);

        }
        cout<<sum<<endl;
    }
    return 0;
}
