/*	
	A. Luxurious Houses
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], dp[n];
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	dp[n-1]=a[n-1];
	for (int i=n-2; i>=0; i--) {
		dp[i] = max(dp[i+1], a[i]);
	}
	for (int i=0; i<n-1; ++i) {
		if (a[i]==dp[i]) {
			if (a[i] == dp[i+1])
				printf("%d ", dp[i]-a[i]+1);
			else
				printf("0 ");
		}
		else
			printf("%d ", dp[i]-a[i]+1);
	} putchar('0');

	return 0;
}