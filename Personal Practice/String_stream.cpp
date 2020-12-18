#include<bits/stdc++.h>
using namespace std;
int main()
{

    char line[1000];
    while(gets(line))
    {
        stringstream ss(line);
        int num, i;vector<int>v;
        while(ss>>num)v.push_back(num);
        sort(v.begin(), v.end());
        for(i = 0; i<v.size();i++)cout<<v[i]<<endl;
    }
}
