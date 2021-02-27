/*
	A. Partition
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int sumpos=0, sumneg=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x>=0)
			sumpos += x;
		else sumneg += x;
	}
	printf("%d\n", sumpos-sumneg);

	return 0;
}