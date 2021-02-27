/*
	A. Fair Game
	Time limit 1 s
	Memory limit 256 MB
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
		m[x]++;
	}
	auto a=m.cbegin(), b=m.cbegin();
	b++;
	if (m.size()==2 && a->second==b->second) {
		puts("YES");
		printf("%d %d\n", a->first, b->first);
	} else puts("NO");

	return 0;
}