#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p=0, q;
    scanf("%d", &n);
    int arr[n][n], j, k;
    for(i = 0; i<n; i++)
        for(j = 0; j<n; j++)
    {
        scanf("%d", &arr[i][j]);
    }

    for(k = 0; k<n; k++)
    {

        for(i = k, j=0;i>=0;i--, j++)
       {
           printf("%d ", arr[i][j]);

       }


    }
    for(k = 1;k<n; k++)
    {
        for(i = n-1,j =k ;j<n;i--, j++)
            printf("%d ", arr[i][j]);
        if(i==n && j==n)
            break;

    }
    return 0;
}
