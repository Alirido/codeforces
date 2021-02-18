/*
	A. Death Note
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int ans, temp=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		ans = (temp+x)/m;
		printf("%d ", ans);
		temp = (temp+x)%m;
	}

	return 0;
}