#include<bits/stdc++.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    for(x = 1; x<=t; x++)
    {
        char str1[106], str2[106], str3[106], str4[106], str5[106], str6[107], str7[106], str8[106], str9[106], str10[106];
        int i, n = 0, arr[11];
        scanf("%s%d", &str1, &arr[0]);
        scanf("%s%d", &str2, &arr[1]);
        scanf("%s%d", &str3, &arr[2]);
        scanf("%s%d", &str4, &arr[3]);
        scanf("%s%d", &str5, &arr[4]);
        scanf("%s%d", &str6, &arr[5]);
        scanf("%s%d", &str7, &arr[6]);
        scanf("%s%d", &str8, &arr[7]);
        scanf("%s%d", &str9, &arr[8]);
        scanf("%s%d", &str10, &arr[9]);
        for(i = 0; i<10; i++)
        {
            if(n<arr[i])
            n = arr[i];
        }
        getchar();
        printf("Case #%d:\n", x);
        if(n==arr[0])
            printf("%s\n", str1);
        if(n==arr[1])
            printf("%s\n", str2);
        if(n==arr[2])
            printf("%s\n", str3);
        if(n==arr[3])
            printf("%s\n", str4);
        if(n==arr[4])
            printf("%s\n", str5);
        if(n==arr[5])
            printf("%s\n", str6);
        if(n==arr[6])
            printf("%s\n", str7);
        if(n==arr[7])
            printf("%s\n", str8);
        if(n==arr[8])
            printf("%s\n", str9);
        if(n==arr[9])
            printf("%s\n", str10);
    }
    return 0;

}
