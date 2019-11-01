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
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)

using namespace std;

int first_score(char grid[3][3])
{
    int c=0;
    if (grid[0][0]=='X'&& grid[1][0]=='X'&& grid[2][0]=='X')
        c++;
    if (grid[0][1]=='X'&& grid[1][1]=='X'&& grid[2][1]=='X')
        c++;
    if (grid[0][2]=='X'&& grid[1][2]=='X'&& grid[2][2]=='X')
        c++;
    if (grid[0][0]=='X'&& grid[0][1]=='X'&& grid[0][2]=='X')
        c++;
    if (grid[1][0]=='X'&& grid[1][1]=='X'&& grid[1][2]=='X')
        c++;
    if (grid[2][0]=='X'&& grid[2][1]=='X'&& grid[2][2]=='X')
        c++;
    if (grid[0][0]=='X'&& grid[1][1]=='X'&& grid[2][2]=='X')
        c++;
    if (grid[0][2]=='X'&& grid[1][1]=='X'&& grid[2][0]=='X')
        c++;
    return c;
}

int second_score(char grid[3][3])
{
    int c=0;
    if ( grid[0][0]=='O'&& grid[1][0]=='O'&& grid[2][0]=='O')
        c++;
    if ( grid[0][1]=='O'&& grid[1][1]=='O'&& grid[2][1]=='O')
        c++;
    if ( grid[0][2]=='O'&& grid[1][2]=='O'&& grid[2][2]=='O')
        c++;
    if ( grid[0][0]=='O'&& grid[0][1]=='O'&& grid[0][2]=='O')
        c++;
    if ( grid[1][0]=='O'&& grid[1][1]=='O'&& grid[1][2]=='O')
        c++;
    if ( grid[2][0]=='O'&& grid[2][1]=='O'&& grid[2][2]=='O')
        c++;
    if ( grid[0][0]=='O'&& grid[1][1]=='O'&& grid[2][2]=='O')
        c++;
    if ( grid[0][2]=='O'&& grid[1][1]=='O'&& grid[2][0]=='O')
        c++;
    return c;
}

int X_counter(char grid[3][3])
{
    int c = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (grid[i][j]=='X')
            {
                c++;
            }
        }
    }
    return c;
}

int O_counter(char grid[3][3])
{
    int c = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (grid[i][j]=='O')
            {
                c++;
            }
        }
    }
    return c;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char grid[3][3];
    while(1)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                cin>>grid[i][j];
                if (grid[i][j]=='e')
                {
                    return 0;
                }
            }
        }
        int frst = first_score(grid); //cout<<frst<<endl;
        int scnd = second_score(grid);//cout<<scnd<<endl;
        int numOfx = X_counter(grid);//cout<<numOfx<<endl;
        int numOfo = O_counter(grid);//cout<<numOfo<<endl;
        if (frst && scnd || numOfo > numOfx || numOfx > numOfo+1 || numOfx == numOfo && frst || numOfx==numOfo+1 && scnd || !(frst|| scnd|| (numOfx + numOfo==9)))
        {
            cout<<"invalid";
        }
        else if (frst)
        {
            bool b=true;
            for (int j=0; j<3; j++)
                for (int k=0; k<3; k++)
                {
                    if(grid[j][k]!='X')continue;
                    grid[j][k]='.';
                    int z=first_score(grid);
                    if (z==0)
                        b=true;
                    grid[j][k]='X';
                }
            if (b)
                cout << "valid";
            else
                cout << "invalid";
        }
        else if (scnd)
        {
            bool b=false;
            for (int j=0; j<3; j++)
                for (int k=0; k<3; k++)
                {
                    if(grid[j][k]!='O')continue;
                    grid[j][k]='.';
                    int z=second_score(grid);
                    if (z==0)
                        b=true;
                    grid[j][k]='O';
                }
            if (b)
                cout << "valid";
            else
                cout << "invalid";
        }
        else
            cout << "valid";
        cout << endl;
    }
    return 0;
}
