/*	
	A. Shifting Stack
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
		int n;
		scanf("%d", &n);
		ll arr[n];
		for (int i=0; i<n; i++) {
			scanf("%lld", &arr[i]);
		}

		ll store=0;
		int i=0;
		bool isSI = true; // is Strictly Increasing 
		while (isSI && i<n) {
			if (arr[i] < i) {
				store -= i-arr[i];
			} else {
				store += arr[i]-i;
			}
			if (store < 0) {
				isSI = false;
			} else {
				i++;
			}
		}
		printf("%s\n", isSI ? "YES" : "NO");

		/*if (n==1 || n==2) {
			if (sum == n-1 || sum >= n)
				printf("YES\n");
			else 
				printf("NO\n");
		} else {
			if (sum >= n)
				printf("YES\n");
			else 
				printf("NO\n");
		}*/
	}

	return 0;
}