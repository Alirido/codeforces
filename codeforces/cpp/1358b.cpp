/*	
	B. Maria Breaks the Self-isolation
	Time limit 2 s
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
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		sort(arr, arr+n);
		int ans = 1, i=n-1;
		while (ans == 1 && i >= 0) {
			if (arr[i] <= i+1)
				ans = i+2;
			else i--;
		}
		printf("%d\n", ans);
	}

	return 0;
}