/*
	A. Olympiad
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int, int> m;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x!=0)
			m[x]++;
	}
	cout << m.size();

	return 0;
}