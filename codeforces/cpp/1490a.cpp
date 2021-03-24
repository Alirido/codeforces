/*	
	A. Dense Array
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
		int ans = 0;
		for (int i=1; i<n; i++) {
			int greater, less;
			if (arr[i] >= arr[i-1]) {
				greater = arr[i];
				less = arr[i-1];
			} else {
				greater = arr[i-1];
				less = arr[i];
			}

			while (greater > 2*less) {
				greater = (greater+1)/2; //ceiling
				ans++;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}