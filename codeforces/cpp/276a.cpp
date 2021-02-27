/*	
	A. Lunch Rush
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int max=-2000000000;
	for (int i=0; i<n; i++) {
		int f, t;
		scanf("%d%d", &f, &t);
		if (t>k) {
			f -= (t-k);
		}
		if (f>max)
			max = f;
	}
	printf("%d\n", max);

	return 0;
}