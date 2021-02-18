/*	
	C. Intense Heat
	Time limit 4 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n];
	for (int i=0; i<n; ++i) scanf("%d", &a[i]);
	float max=-1.0;
	while (k<=n) {
		float sum=0;
		for (int i=0; i<k; ++i) sum += a[i];
		if (sum/(float)k > max) max = sum/(float)k;
		for (int i=k; i<n; i++) {
			sum += (a[i]-a[i-k]);
			if (sum/(float)k > max)
				max=sum/(float)k;
		}
		++k;
	}
	printf("%.7f\n", max);

	return 0;
}