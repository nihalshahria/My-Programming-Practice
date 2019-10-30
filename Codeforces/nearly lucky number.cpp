#include<bits/stdc++.h>
main()
{
    long long int n, lucky=0, m, i, arr[30]={0}, counter = 0;
    scanf("%I64d", &n);
    for(i = 0;; i++)
    {
        arr[i] = n%10;
        if(arr[i]==4||arr[i]==7)
        lucky = lucky+1;

        n = n/10;
        counter = counter+1;
        if(n==0)
            break;
    }

        if(lucky == 4 || lucky ==7)
            printf("YES\n");
        else
            printf("NO\n");


}
