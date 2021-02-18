/*	
	A. GukiZ and Contest
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int pairs=0;
	for (int a=0; a*a<=n; ++a) {
		int b = n-(a*a);
		if (a+(b*b) == m) 
			++pairs;
	}
	printf("%d\n", pairs);

	return 0;
}