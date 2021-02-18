/*	
	A. Codehorses T-shirts
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d\n", &n);
	string s[n];
	map<string, int> m;
	for (int i=0; i<n; ++i) {
		string s;
		cin >> s;
		++m[s];
	}
	for (int i=0; i<n; ++i) {
		string s;
		cin >> s;
		auto it = m.find(s);
		if (it != m.end())
			--m[s];
	}
	int ans=0;
	for (auto elem : m) {
		if (elem.second>0)
			ans += elem.second;
	}

	printf("%d\n", ans);

	return 0;
}