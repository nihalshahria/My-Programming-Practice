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
#include<list>
#define ll              long long
#define ull             unsigned long long
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pf(a)           push_front(a)

using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    //Vector
    cout<<"====vector===="<<endl;
    std::vector<int> v;                                 //vector declaration
    for (int i = 0; i < 5; ++i)
    {
        v.pb(i);                                        //vector input
    }
    bool nihal = binary_search(v.begin(), v.end(), 3);
    cout<<"Nihal "<<nihal<<endl;
    vector<int> :: iterator vi;                         //iterator declaration
    for (vi = v.begin(); vi != v.end(); ++vi)           //vector print
        cout << *vi << " ";
    cout <<endl;
    v.insert(v.begin()+3, 9);                           //vector insertion
    vi = v.insert(v.begin()+3, 9);                      //vector insertion
    v.insert(vi, 6);                                    //vector insertion
    for (vi = v.begin(); vi != v.end(); ++vi)           //vector print
        cout << *vi << " ";
    cout<<endl;
    v.erase(v.begin()+3);                               //vector erase
    for (vi = v.begin(); vi != v.end(); ++vi)           //vector print
        cout << *vi << " ";
    cout <<endl;
    v.erase(v.begin(), v.end());                        //vector erase
    //cout<<"nihal"<<endl;
    v.pb(1);
    cout<<v.size()<<endl;

    //List
    cout<<"====List===="<<endl;
    list<int>l;                                         //list declaration
    for (int i = 0; i < 5; ++i)
    {
        l.pb(i);
    }
    //l.insert(l.begin()+2, 4);
    l.pf(10);                                           //list push_front
    l.pb(500);                                          //list push_back
    list <int> :: iterator it;                          //iterator declaration
    it = l.begin();
    ++it;
    l.insert(it, 9);                                    //list insert
    l.insert(it, 3, 6);                                 //list insert
    l.insert(it, 5);
    for (it = l.begin(); it != l.end(); ++it)           //list print
        cout<<*it<<" ";
    cout<<endl;


    //Map
    cout<<"====Map===="<<endl;
    std::map<char, int> m;                              //map declaration
    m['y']=100;                                         //map input
    m['x']=300;
    m['z']=200;
    m['p']=200;
    m['q']=900;
    m.insert(pair<char, int>('w', 400));                //map input
    //m.emplace('y',100);
    map<char, int>::iterator itm;                       //iterator declaration
    for (itm = m.begin(); itm != m.end(); ++itm)        //map print
        cout<<itm->first<<" "<<itm->second<<endl;
    cout<<m['x']<<endl;
    cout<<m.count('a')<<endl;                           //check if a is a key elemnt of map
    cout<<m.count('x')<<endl;                           //check if x is a key elemnt of map
    std::map<char,int>::iterator itlow, itup;
    itlow = m.lower_bound('q');                         // itlow points to q
    itup = m.upper_bound('x');                          // itup points to y (not x!)
    m.erase(itlow, itup);                               // erases [itlow,itup)
    for (itm = m.begin(); itm != m.end(); ++itm)        //map print
        cout<<itm->first<<" "<<itm->second<<endl;
    itm=m.find('y');
    m.erase (itm);                                             // erasing by key
    itm=m.find ('z');                                   //returns iterator of w
    if (itm != m.end())                       // erasing by iterator
        m.erase ('y');                                         //if w is found
    m.erase ( itm, m.end() );                       // erasing by range
    for (itm = m.begin(); itm != m.end(); ++itm)        //map print
        cout<<itm->first<<" "<<itm->second<<endl;


    //priority_queue
    std::priority_queue<int> mypq;
    int sum (0);
    for (int i=1;i<=10;i++) mypq.push(i);
    for (int i=1;i<=10;i++){
    cout<<mypq.top()<<" ";
    mypq.pop();
    }
    cout<<endl;
        cout<<mypq.top()<<endl;
    int n[10] = {2};
    for (int i = 0; i < 10; ++i)
    {
        cout<<n[i]<<endl;
    }

    return 0;
}
