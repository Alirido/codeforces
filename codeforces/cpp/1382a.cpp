/*	
	A. Common Subsequence
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m, x;
		scanf("%d %d", &n, &m);
		map<int, int> a;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			a[x]++;
		}
		vector<int> b;
		for (int i=0; i<m; i++) {
			scanf("%d", &x);
			b.push_back(x);
		}
		bool isSub = false;
		int i=0;
		while (!isSub && i<m) {
			if (a[b[i]] > 0) {
				isSub = true;
				printf("YES\n");
				printf("1 %d\n", b[i]);
			} else
				i++;
		}
		if (!isSub)
			printf("NO\n");
	}

	return 0;
}