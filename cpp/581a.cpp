/*
	A. Vasya the Hipster
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a<b) {
		printf("%d %d\n", a, ((b-a)/2));
	} else {
		printf("%d %d\n", b, ((a-b)/2));
	}
	
	return 0;
}
