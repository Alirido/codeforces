/*
	C. Less or Equal
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	map<int, int> m;
	while (n--) {
		int x;
		scanf("%d", &x);
		m[x]++;
	}
	auto it=m.cbegin();
	if (k==0) {
		if (m[1])
			puts("-1");
		else putchar('1');
	}
	else {
		while (k>0 && it!=m.cend()) {
			k-=it->second;
			it++;
		}
		if (k==0) {
			it--;
			printf("%d\n", it->first);
		} else puts("-1");
	}

	return 0;

}