/*	
	A. Nicholas and Permutation
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans=-1;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		if (x==1 || x==n) {
			if (max(i-1, n-i)>ans)
				ans = max(i-1, n-i);
		}
	}
	printf("%d\n", ans);

	return 0;
}