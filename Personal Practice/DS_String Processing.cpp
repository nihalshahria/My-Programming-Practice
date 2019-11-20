/*
          _____       __   __   __      __    _________    __
         |     \     |  | |  | |  |    |  |  |   ___   |  |  |
         |  |\  \    |  | |  | |  |    |  |  |  |   |  |  |  |
         |  | \  \   |  | |  | |  |____|  |  |  |___|  |  |  |
         |  |  \  \  |  | |  | |   ____   |  |   ___   |  |  |
         |  |   \  \ |  | |  | |  |    |  |  |  |   |  |  |  |
         |  |    \  \|  | |  | |  |    |  |  |  |   |  |  |  |_________
         |__|     \_____| |__| |__|    |__|  |__|   |__|  |____________|
*/


#include <bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("d",&a,&b)
#define sfff(a,b,c)     scanf("d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define loop(i,n)       for(int i=0;i<n;i++)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define pb(a)           push_back(a)

using namespace std;

void substring(){
    char str[1000];
    gets(str);
    int start, l;
    cin>>start>>l;
    for(int i = start-1; i<start+l-1; i++)
        cout<<str[i];
    cout<<endl;
}

void strIndexing(){
    char str1[1000];
    gets(str1);
    char str2[1000];
    gets(str2);
    int l1 = strlen(str1), l2 = strlen(str2);
    int count = 0, index;
    bool avlabl = false;
    for(int i = 0; i<l1; i++)
    {
        if(str1[i]==str2[0])
        {
            count++;
            for(int j = 1; j<l2; j++)
            {
                if(str1[i+j]==str2[j])
                {
                    count++;
                    if(count == l2)
                    {
                        avlabl = true;
                        index = i+1;
                        break;
                    }
                }
                else
                {
                    count = 0;
                    break;
                }

            }
        }
        if(avlabl == true)
            break;
    }
    if(avlabl == true)
        cout<<index<<endl;
    else
        cout<< "Not found" <<endl;
}

void strInsert(){
    char str[1000], str2[400];
	gets(str);
	int p,l1,l2;
	cin>>p;
	l1=strlen(str);
	getchar();
	gets(str2);
	l2=strlen(str2);
	for(int i=l1;i>=p-1;--i)
		str[i+l2]=str[i];
	for(int i=p-1,j=0;j<l2;++i,j++)
		str[i]=str2[j];
	cout<<str<<'\n';
}

void strDelete(){
    char str[1000];
    int i,p1,l, ln, j;
    gets(str);
    l = strlen(str);
    cin>>p1>>ln;
    for(i=p1+ln-1, j=0;i<l;i++, j++)
        str[p1-1+j]=str[i];
    str[p1+j-1]='\0';
    cout << str << '\n';
}

int main(){
    printf("\n\t 1. Indexing\n\t 2. Substring\n\t 3. String Insert\n\t 4. String Delete\n\t 5.EXIT");
    do{
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                strIndexing();
                break;
            }
            case 2:
            {
                substring();
                break;
            }
            case 3:
            {
                strInsert();
                break;
            }
            case 4:
            {
                strDelete();
                break;
            }
            default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    }while(choice!=5);
    return 0;
    strIndexing();
    substring();
    strInsert();
    strDelete();

    return 0;
}
