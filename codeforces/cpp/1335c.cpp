/*	
	C. Two Teams Composing
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		map<int, int> m;
		int mx = 0, x;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			m[x]++;
			if (m[x] > mx)
				mx = m[x];
		}
		if (n < 4)
			printf("%d\n", n/2);
		else {
			int sz = m.size();
			if (mx == sz)
				printf("%d\n", mx-1);
			else if (mx > sz)
				printf("%d\n", sz);
			else 
				printf("%d\n", mx);
		}
	}

	return 0;
}