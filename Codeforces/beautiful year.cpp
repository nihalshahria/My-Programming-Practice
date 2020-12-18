#include<bits/stdc++.h>
int main()
{
    int arr[4], n, m, x, k, i, j;
    scanf("%d", &n);
    for(i = n+1; ; i++)
    {
        int flag = 1;
        m = i;
        for(j = 0; j<4; j++)
        {
            arr[j] = m%10;
            m = m/10;
        }
        for(j = 0; j<4; j++)
        {
            for(k = j+1; k<4; k++)
                if(arr[j]==arr[k])
                {
                    flag = 0;
                    break;
                }
        }

        if(flag == 1)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
