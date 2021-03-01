/*	
	B. Two Arrays and Swaps
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		int a[n], b[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i=0; i<n; i++) {
			scanf("%d", &b[i]);
		}
		sort(a, a+n);
		sort(b, b+n, greater<int>());

		int i=0;
		while (a[i] < b[i] && k>0 && i<n-1) {
			a[i] = b[i];
			i++;
			k--;
		}
		if (i==n-1 && k && a[i] < b[i])
			a[i] = b[i];
		int sum = 0;
		for (i=0; i<n; i++)
			sum += a[i];
		printf("%d\n", sum);
	}

	return 0;
}