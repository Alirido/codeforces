/*
	A. Vanya and Cubes
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	bool enough=false;
	
	scanf("%d", &n);
	i=1;
	while (!enough) {
		if (n>=(i*(i+1)/2)) {
			n = n - (i*(i+1)/2);
			i++;
		} else {
			enough=true;
		}
	}
	printf("%d\n", i-1);
	
	return 0;
}
