/*	
	A. Vanya and Cards
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	scanf("%d%d", &n, &x);
	int sum=0;
	while (n--) {
		int t;
		scanf("%d", &t);
		sum += t;
	}
	printf("%d\n", (int)ceil(abs(sum)/(float)x));

	return 0;
}