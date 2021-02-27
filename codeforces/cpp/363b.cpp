/*
	B. Fence
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int min = 0, ans = 1;
	for (int i=0; i<k; i++) {
		min += a[i];
	}
	int sum = min;
	for (int i=1; i<n-k+1; i++) {
		sum = sum - a[i-1] + a[i+k-1]; 
		/*for (int j=i; j<i+k; j++) {
			sum += a[j];
		}*/
		if (sum<min) {
			min = sum;
			ans = i+1;
		}
	}
	printf("%d\n", ans);

	return 0;
}