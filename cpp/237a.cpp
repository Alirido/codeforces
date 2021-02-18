/*	
	A. Free Cash
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<pair<int, int>, int> m;
	int max=0;
	for (int i=0; i<n; i++) {
		int a,b;
		scanf("%d%d", &a, &b);
		m[make_pair(a,b)]++;
		if (max<m[make_pair(a,b)]) {
			max = m[make_pair(a,b)];
		}
	}
	printf("%d\n", max);

	return 0;
}