/*	
	A. Modular Exponentiation
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	if (n>=27) {
		printf("%d\n", m);
	} else {
		printf("%d\n", m%((int) pow(2, n)));
	}

	return 0;
}