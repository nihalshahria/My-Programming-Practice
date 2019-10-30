#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4], a, b, c;
    int i, j;
    for(i = 0; i<4; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i<3; i++)
    {
        for(j = i+1; j<4; j++)
        {
            if(arr[i]>arr[j])
        {
            a= arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
        }
    }
    c= arr[3]-arr[2];
    b=arr[3]-arr[1];
    a= arr[3]-arr[0];
    printf("%d %d %d", a, b, c);
    return 0;
}
