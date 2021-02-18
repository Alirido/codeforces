/*
	A. Chips
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int mod=n*(n+1)/2;
	m %= mod;
	int i=1;
	while (m-i>=0) {
		m-=i;
		i++;
	}
	printf("%d\n", m);

	return 0;
}