#include<bits/stdc++.h>
int main()
{
    int n, k, i, x, j, sum = 0;
    scanf("%d%d", &n, &k);
    int arr[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*for(i = 0; i<n-1; i++)
        for(j = i+1; j<n;j++)
            if(arr[j]<arr[i])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
*/
    for(i = 0; i<n; i++)
    {
        if((arr[k-1]<=arr[i])&&(arr[i]!=0))
            sum = sum + 1;
    }
    printf("%d", sum);
    return 0;

}
