/*	
	B. Fedor and New Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[m+1];
	for (int i=0; i<=m; i++) {
		scanf("%d", &a[i]);
	}
	int friends=0;
	for (int i=0; i<m; i++) {
		if (__builtin_popcount(a[m]^a[i])<=k) {
			friends++;
		}
	}
	printf("%d\n", friends);

	return 0;
}

/*
__builtin_popcount(N) return the numbers of '1' bit in an integer N

__builtin_popcount = int
__builtin_popcountl = long int
__builtin_popcountll = long long
*/