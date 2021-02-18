/*
	B. Buttons
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	int result=n;
	for (i=1; i<n; i++) {
		result += (n-i)*i;
	}
	printf("%d\n", result);
	return 0;
}