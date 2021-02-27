/*
	B. A and B and Compilation Errors
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
unsigned long long t1, t2;

int main() {
	int n;
	scanf("%d", &n);
	int x;
	for (int i=0; i<n; i++) {
		scanf("%d", &x);
		t1 += x;
	}
	t2 = t1;
	for (int i=1; i<n; i++) {
		scanf("%d", &x);
		t1 -= x;
	}
	printf("%I64d\n", t1);
	t2 -= t1;
	for (int i=2; i<n; i++) {
		scanf("%d", &x);
		t2 -= x;
	}
	printf("%I64d\n", t2);

	return 0;
}