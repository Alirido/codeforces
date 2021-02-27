/*	
	A. Football
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<string, int> m;
	while (n--) {
		string s;
		cin >> s;
		m[s]++;
	}
	auto a = m.begin();
	auto b = m.cend();
	--b;
	if (a->second > b->second)
		cout << a->first << endl;
	else cout << b->first << endl;

	return 0;
}