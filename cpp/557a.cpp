/*
	A. Ikya and Diplomas
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int min1,min2,min3,max1,max2,max3;
	scanf("%d%d", &min1, &max1);
	scanf("%d%d", &min2, &max2);
	scanf("%d%d", &min3, &max3);
	n-=(min3+min2);
	if (n>max1) {
		printf("%d ", max1);
		n-=max1;
		if (n>max2-min2) {
			n -= (max2-min2);
			printf("%d %d\n", max2, min3+n);
		} else printf("%d %d\n", min2+n, min3);
	} else {
		printf("%d %d %d\n", n, min2, min3);
	}

	return 0;
}