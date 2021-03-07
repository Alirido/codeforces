/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 7: Dynamic Programming
	C. Penukaran Emas
	Time limit 1 s
	Memory limit 16 MB
*/

#include <bits/stdc++.h>
using namespace std;

int dp(int n) {
	if (n < 12)
		return n;

	return dp(n/2) + dp(n/3) + dp(n/4);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", dp(n));

	return 0;
}