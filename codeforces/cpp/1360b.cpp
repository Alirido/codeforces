/*	
	B. Honest Coach
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
		for (int i=0; i<n; i++) 
			scanf("%d", &arr[i]);
		sort(arr, arr + n);
		int min = 1001;
		for (int i=1; i<n; i++) {
			int dif = arr[i] - arr[i-1];
			if (dif < min)
				min = dif;
		}
		printf("%d\n", min);
	}

	return 0;
}