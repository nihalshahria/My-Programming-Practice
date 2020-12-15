#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s", str);
    // printf("%c\n", str[1]);
    int v = 0;
    for (int i = 0; i < strlen(str); ++i)
    {
        if(str[i]<='Z'&&str[i]>='A')str[i] = str[i]-'A'+'a';
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')v++;
        // str[i] = to_lower(str[i]);
        // printf("%s\n", );
    }
    printf("Vowel-%d\n", v);
    printf("Consonant-%d\n", strlen(str)-v);
    return 0;
}
