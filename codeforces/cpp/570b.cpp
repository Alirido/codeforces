/*	
	B. Simple Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (m <= n-m)
		printf("%d\n", m+1);
	else {
		if (m!=1)
			printf("%d\n", m-1);
		else printf("1\n");
	}

	return 0;
}