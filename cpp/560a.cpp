/*	
	A. Currency System in Geraldion
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	if (a[0] == 1) {
		printf("-1\n");
	} else {
		printf("1\n");
	}

	return 0;
}