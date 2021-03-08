/*	
	C. Alternating Subsequence
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll min_neg = -1000000001;

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
		ll sum = 0, neg=min_neg, pos=0;
		int i=0;
		while (i < n) {
			if (arr[i] < 0) {
				while (i < n) {
					if (arr[i] < 0) {
						if (arr[i] > neg) 
							neg = arr[i];
						i++;
					} else {
						sum += neg;
						neg = min_neg;
						break;
					}
				}
				if (i == n)
					sum += neg;
			} else {
				while (i < n) {
					if (arr[i] > 0) {
						if (arr[i] > pos)
							pos = arr[i];
						i++;
					} else {
						sum += pos;
						pos = 0;
						break;
					}
				}
				if (i == n)
					sum += pos;
			}
		}
		printf("%lld\n", sum);
	}

	return 0;
}