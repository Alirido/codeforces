/*	
	B. Unique Bid Auction
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int idx[n+1] = {-1};
		map<int, int> m;
		for (int i=1; i<=n; i++) {
			int x;
			scanf("%d", &x);
			m[x]++;
			idx[x] = i;
		}

		bool possible = false;
		for (auto const& it : m) {
			if (it.second == 1) {
				printf("%d\n", idx[it.first]);
				possible = true;
				break;
			}
		}

		if (!possible)
			printf("-1\n");

	}

	return 0;
}