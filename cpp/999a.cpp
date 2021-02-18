/*	
	A. Mishka and Contest
	Time limit 3 s
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
	int i=0, j=n-1; 
	while (i<n && a[i]<=k) {
		i++;
	} 
	while (j>i && a[j]<=k) {
		j--;
	}
	printf("%d\n", n-(j-i+1));

	return 0;
}