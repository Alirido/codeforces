/*
	A. Raising Bacteria
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d", &x);
	int count=0;
	while (x>0) {
		if (x%2==1) {
			count++;
		}
		x = x/2;
	}
	printf("%d\n", count);

	return 0;
}