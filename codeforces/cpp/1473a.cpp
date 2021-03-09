/*	
	A. Replacing Elements
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, d;
		scanf("%d %d", &n, &d);
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		sort(arr, arr+n);
		if (arr[0] + arr[1] <= d || arr[n-1] <= d)
			printf("YES\n");
		else 
			printf("NO\n");
	}

	return 0;
}