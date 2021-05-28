#include <bits/stdc++.h>
using namespace std;
void computeLPS(string &pat, int &l2, std::vector<int> &v)
{
	for (int i = 1; i < l2; i++)
	{
		int j = v[i - 1];
		while (j > 0 && pat[i] != pat[j])
			j = v[j - 1]; //* aabaaab 0101223
		if (pat[i] == pat[j])
			j++;
		v[i] = j;
	}
}
void kmp(string &str, string &pat)
{
	int l1 = str.size(), l2 = pat.size(), i = 0, j = 0, f = 0;
	std::vector<int> v(l2, 0);
	computeLPS(pat, l2, v);

	while (i < l1)
	{
		if (pat[j] == str[i])
			j++, i++;
		if (j == l2)
			printf("%d found\n", i - j + 1), j = v[j - 1], f++;
		else if (i < l1 && pat[j] != str[i])
		{
			if (j)
				j = v[j - 1];
			else
				i++;
		}
	}
}
int main(int argc, char const *argv[])
{
	string str1, pat;
	cin >> str1 >> pat; //input
	kmp(str1, pat);
	return 0;
}