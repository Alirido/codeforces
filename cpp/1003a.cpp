/*	
	A. Polycarp's Pockets
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[105];

int main() {
	int n;
	scanf("%d", &n);
	int max=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		a[x]++;
		if (a[x]>max)
			max=a[x];
	}
	printf("%d\n", max);

	return 0;
}