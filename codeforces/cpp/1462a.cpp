/*	
	A. Favorite Sequence
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
		int left=0, right=n-1;
		bool leftTurn = true;
		int ans[n], i=0;
		while (left <= right) {
			if (leftTurn) {
				ans[i] = arr[left];
				left++;
				leftTurn = false;
			} else {
				ans[i] = arr[right];
				right--;
				leftTurn = true;
			}
			i++;
		}
		for (i=0; i<n; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
	}

	return 0;
}