/*	
	A. Bad Tringale
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
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		if (arr[0] + arr[1] > arr[n-1])
			printf("-1\n");
		else
			printf("1 2 %d\n", n);
	}

	return 0;
}