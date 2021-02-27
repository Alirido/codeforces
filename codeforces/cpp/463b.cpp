/*	
	B. Caisa and Pylons
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	int dollars=a[0], energy=0;
	for (int i=1; i<n; i++) {
		energy += (a[i-1]-a[i]);
		if (energy<0) {
			dollars += abs(energy);
			energy=0;
		}
	}
	printf("%d\n", dollars);

	return 0;
}