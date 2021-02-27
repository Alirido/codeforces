/*	
	A. GukiZ and Contest
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int position[2001];

int main() {
	int n;
	scanf("%d", &n);
	int sorted[n], id[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &id[i]);
		sorted[i] = id[i];
	}
	sort(sorted, sorted+n);
	int i=1;
	while (i<n) {
		while (i < n && sorted[i-1] == sorted[i])
			i++;
		position[sorted[i-1]] = 1+(n-i);
		i++;
	} 
	if (i==n)
		position[sorted[i-1]] = 1;
	for (int j=0; j<n-1; j++) {
		printf("%d ", position[id[j]]);
	} printf("%d\n", position[id[n-1]]);

	return 0;
}