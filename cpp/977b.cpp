/*	
	B. Two-gram
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	map<string, int> m;
	for (int i=1; i<n; ++i) {
		string temp;
		temp = s[i-1];
		temp += s[i];
		m[temp]++;
	}
	int mx=0;
	string ans;
	for (auto elem : m) {
		if (elem.second>mx) {
			ans = elem.first;
			mx = elem.second;
		}
	}
	cout << ans << endl;

	return 0;
}