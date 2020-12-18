#include <bits/stdc++.h>
using namespace std;
stack<int>v[25], st;
std::map<int, int> m;
int n, a, i, b, posA, posB, t;
string str1, str2;
void make_top(int x, int y){
    t = v[y].top();
    while (t != x) m[t] = t, v[t].push(t), v[y].pop(), t = v[y].top();
}
void store(){
    t = v[posA].top();
    while (t != a) st.push(t), v[posA].pop(), t = v[posA].top();
    st.push(t), v[posA].pop();
    while (!st.empty()) t = st.top(), st.pop(), v[posB].push(t), m[t] = posB;
}
void move(int z) {
    if(z)make_top(b,posB);
    make_top(a,posA);
    v[posA].pop(), v[posB].push(a), m[a] = posB;
}
void pile(int z) {
    if(z)make_top(b,posB);
    store();
}
int main() {
    scanf("%d", &n);
    for (i = 0; i < n; ++i)v[i].push(i), m[i] = i;
    while (cin >> str1) {
        if (str1[0] == 'q')break;
        scanf("%d", &a);
        cin >> str2;
        scanf("%d", &b);
        if (m[a] == m[b])continue;
        posA = m[a], posB = m[b];
        if (str1[0] == 'm' && str2[1] == 'n')move(1);
        else if (str1[0] == 'm' && str2[1] == 'v')move(0);
        else if (str1[0] == 'p' && str2[1] == 'n')pile(1);
        else if (str1[0] == 'p' && str2[1] == 'v')pile(0);
    }
    for (i = 0; i < n; ++i) {
        printf("%d:", i);
        while (!v[i].empty())st.push(v[i].top()), v[i].pop();
        while (!st.empty())printf(" %d", st.top()), st.pop();
        printf("\n");
    }
    return 0;
}
