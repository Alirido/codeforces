/*
	B. Game of Robots
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	for (int i=1; k-i>0; ++i)
		k-=i;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		if (i==k) {
			printf("%d\n", x);
			return 0;
		}
	}

	return 0;
}