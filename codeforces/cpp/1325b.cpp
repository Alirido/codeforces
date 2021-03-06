/*	
	B. CopyCopyCopyCopyCopy
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
		map<int, bool> m;
		int ans=0;
		for (int i=0; i<n; i++) {
			int x;
			scanf("%d", &x);
			if (!m[x]) {
				ans++;
				m[x] = true;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}