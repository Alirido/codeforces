/*	
	A. Buying A House
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
		if (a[i]==0)
			a[i] += 1000;
	}
	int left=m-2, right=m;
	while (a[left] > k && left>=0) --left;
	while (a[right] > k && right<n) ++right;
	if (left==-1)
		printf("%d\n", (right-m+1)*10);
	else {
		if (right==n)
			printf("%d\n", (m-left-1)*10);
		else printf("%d\n", ((int) min(right-m+1, m-left-1))*10);
	}

	return 0;
}