/*
	B. Equidistant String
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s,t;
	cin >> s;
	cin >> t;
	vector<int> v;
	for (int i=0; i<s.length(); ++i) {
		if (s[i]!=t[i])
			v.push_back(i);
	}
	if (v.size()%2==0) {
		int change=0;
		for (int i=0; i<s.length(); ++i) {
			if (change < v.size()/2) {
				if (i==v[change]) {
					putchar(t[i]);
					change++;
				}
				else putchar(s[i]);
			} else putchar(s[i]);
		}
	} else puts("impossible");

	return 0;

}