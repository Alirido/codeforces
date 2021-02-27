/*	
	A. Cards
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<pair<int, int>, int> mp;
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		mp[make_pair(x, i)]++;
	}
	/*// TESTING
	for (auto i : mp) {
		cout << i.first.first << "-" << i.first.second << "\t" << i.second << endl;
	}*/

	map<pair<int, int>, int>::iterator front = mp.begin(), back = mp.end();
	int i=1; back--;
	while (i<=n/2) {
		printf("%d %d\n", front->first.second, back->first.second);
		front++; back--;
		i++;
	}

	return 0;
}