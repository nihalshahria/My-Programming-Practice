#include<bits/stdc++.h>
using namespace std;
void computeLPS(string &pat, int &l2, std::vector<int>& v) {
	int j = 0;
	for (int i = 2; i < l2; i++) 
		v.push_back((pat[i] == pat[j + 1])?++j:j = v[j-1]);
}
void kmp(string &str, string &pat) {
	std::vector<int> v{0,0};
	str = "#" + str;
	pat = "#" + pat;
	int l1 = str.size(), l2 = pat.size(), i = 1, j = 0, f = 0;
	computeLPS(pat, l2, v);
	while (i < l1) {
		if (str[i] == pat[j + 1]) i++, j++;
		if (j + 1 == l2)printf("%d found\n", i + 1 - l2), j = v[j], f++;
		else if (i<l1&&str[i] != pat[j + 1]) (!j)? i++: j = v[j];
	}
	if(!f)printf("Not Found\n");
}
int main(int argc, char const *argv[])
{
	string str1, pat;
	cin >> str1 >> pat;
	kmp(str1, pat);
	return 0;
}