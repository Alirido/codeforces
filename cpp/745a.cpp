/*	
	A. Hongcow Learns the Cyclic Shift
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	set<string> a;
	a.insert(s);
	int n = s.length();
	for (int i=0; i<n; i++) {
		s = s.back() + s;
		s.pop_back();
		a.insert(s);
	}
	cout << a.size() << endl;

	return 0;
}