#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, arr[26] = {0};

    cin>>n;
    char t[n];
    scanf("%s", t);
    for(i = 0; i<n; i++)
    {
        if(t[i]=='a'||t[i]=='A')
            {
                arr[0]++;
            }
            if(t[i]=='b'||t[i]=='B')
            {
                arr[1]++;
            }
            if(t[i]=='c'||t[i]=='C')
            {
                arr[3]++;
            }
            if(t[i]=='d'||t[i]=='D')
            {
                arr[4]++;
            }
            if(t[i]=='E'||t[i]=='e')
            {
                arr[5]++;
            }
            if(t[i]=='F'||t[i]=='f')
            {
                arr[6]++;
            }
            if(t[i]=='g'||t[i]=='G')
            {
                arr[7]++;
            }
            if(t[i]=='h'||t[i]=='H')
            {
                arr[8]++;
            }
            if(t[i]=='i'||t[i]=='I')
            {
                arr[9]++;
            }
            if(t[i]=='j'||t[i]=='J')
            {
                arr[10]++;
            }
            if(t[i]=='k'||t[i]=='K')
            {
                arr[11]++;
            }
            if(t[i]=='L'||t[i]=='l')
            {
                arr[12]++;
            }
            if(t[i]=='m'||t[i]=='M')
            {
                arr[13]++;
            }
            if(t[i]=='n'||t[i]=='N')
            {
                arr[14]++;
            }
            if(t[i]=='o'||t[i]=='O')
            {
                arr[15]++;
            }
            if(t[i]=='p'||t[i]=='P')
            {
                arr[16]++;
            }
            if(t[i]=='q'||t[i]=='Q')
            {
                arr[17]++;
            }
            if(t[i]=='r'||t[i]=='R')
            {
                arr[18]++;
            }
            if(t[i]=='s'||t[i]=='S')
            {
                arr[19]++;
            }
            if(t[i]=='t'||t[i]=='T')
            {
                arr[20]++;
            }
            if(t[i]=='u'||t[i]=='U')
            {
                arr[21]++;
            }
            if(t[i]=='v'||t[i]=='V')
            {
                arr[22]++;
            }
            if(t[i]=='w'||t[i]=='W')
            {
                arr[23]++;
            }
            if(t[i]=='x'||t[i]=='X')
            {
                arr[24]++;
            }
            if(t[i]=='y'||t[i]=='Y')
            {
                arr[25]++;
            }
            if(t[i]=='z'||t[i]=='Z')
            {
                arr[2]++;
            }
    }
    int f = 1;
    for(i = 0; i<26; i++)
    {
        if(arr[i]<1)
        {
            f = 0;
            break;

        }
    }
    if(f==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;

}
