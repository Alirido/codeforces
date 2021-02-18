/*
	C. Registration System
	Time limit 5 s
	Memory Limit 64 MB

	Using map data structure
*/

/* ------ FASTER ------ */

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<string, int> m;
	map<string, int>::iterator it=m.begin();
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		it=m.find(s);
		if (it==m.end()) {
			m.insert(make_pair(s, 1));
			printf("OK\n");
		} else {
			cout << it->first << it->second << endl;
			it->second++;
		}
	}

	return 0;

}