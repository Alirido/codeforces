/*	
	A. Cards
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

char c;

int main() {
	int n;
	scanf("%d\n", &n);
	map<char, int> m;
	while ((c=getchar()) != '\n') {
		m[c]++;
	}
	for (int i=0; i<m['n']; i++) {
		printf("1 ");
	}
	for (int i=0; i<m['z']; i++) {
		printf("0 ");
	}
	printf("\n");

	return 0;
}