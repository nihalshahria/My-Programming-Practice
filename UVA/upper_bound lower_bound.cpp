// CPP program to illustrate 
// std :: lower_bound 
#include <bits/stdc++.h> 
using namespace std;


// Driver code 
int main() 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif 
	vector<int> v{ 10, 20, 30, 40, 50 }; 

	// Print vector 
	std::cout << "Vector contains :"; 
	for (unsigned int i = 0; i < v.size(); i++) 
	cout << " " << v[i]; 
	cout << "\n"; 

	vector<int>::iterator low1, low2; 

	// std :: lower_bound 
	low1 = std::lower_bound(v.begin(), v.end(), 21); 
	low2 = std::lower_bound(v.begin(), v.end(), 55); 
	//cout << low1 << '\n';
	//cout << low2 << '\n';

	cout << "\nlower_bound for element 21 at position : " << (low1 - v.begin()); 
	cout << "\nlower_bound for element 55 at position : " << (low2 - v.begin()); 

	return 0; 
} 

