/*	
	B. Cormen - The Best Friend Of a Man
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n], addwalk=0;
	scanf("%d", &a[0]);
	for (int i=1; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] + a[i-1] < k) {
			addwalk += k-(a[i] + a[i-1]);
			a[i] += k-(a[i] + a[i-1]);
		}
	}
	printf("%d\n", addwalk);
	for (int i=0; i<n-1; i++) {
		printf("%d ", a[i]);
	} printf("%d\n", a[n-1]);

	return 0;
}