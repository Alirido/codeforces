/*
	B. Vanya and Lanterns
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l, i;
	int arr[1001];
	scanf("%d %d", &n, &l);
	for (i=1; i<=n; i++) {
		cin >> arr[i-1];
	}
	sort(arr, arr+n);
	int radius=0;
	for (i=1; i<n; i++) {
		if (radius<arr[i]-arr[i-1]) {
			radius = arr[i]-arr[i-1];
		}
	}
	//printf("%d\n", radius);
	double minr= (double)radius/2.0;
	//printf("%.10f\n", minr);
	if (minr<arr[0]-0) {
		minr = arr[0];
	}
	if (minr<l-arr[n-1]) {
		minr = l-arr[n-1];
	}
	printf("%.10f\n", minr);
	
	return 0;
}
