/*
	B. BerSU Ball
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	//BOYS
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);

	//GIRLS
	scanf("%d", &m);
	int b[m];
	for (int i=0; i<m; i++) {
		cin >> b[i];
	}
	sort(b, b+m);

	int max=0;
	int i=0, j=0;
	while (i<n && j<m) {
		if (abs(a[i]-b[j]) <= 1) {
			max++; i++; j++;
		} else {
			if (a[i]>b[j]) {
				j++;
			} else {
				i++;
			}
		}
	}
	printf("%d\n", max);


	return 0;
}