/*	
	A. Nezzar and Colorful Balls
	Time limit 1 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		map<int, int> m;
		int x;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			m[x]++;
		}
		int mx = 0;
		for (auto const& it : m) {
			if (it.second > mx)
				mx = it.second;
		}
		printf("%d\n", mx);
	}

	return 0;
}
