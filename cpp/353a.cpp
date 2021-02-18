/*
	A. Domino
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[101],b[101],suma,sumb;

int main() {
	int n;
	scanf("%d", &n);
	// vector<int> sw;
	bool swapping=false;
	for (int i=0; i<n; ++i) {
		scanf("%d%d", &a[i], &b[i]);
		if (!swapping) {
			if ((a[i]%2==0 && b[i]%2==1) || (a[i]%2==1 && b[i]%2==0))
				swapping=true;
		}
		suma += a[i];
		sumb += b[i];
	}
	if (suma%2==0 && sumb%2==0)
		putchar('0');
	else if (suma%2==1 && sumb%2==1) {
		if (n==1)
			printf("-1\n");
		else {
			if (swapping)
				putchar('1');
			else printf("-1\n");
		}
	} else printf("-1\n");

	return 0;
}