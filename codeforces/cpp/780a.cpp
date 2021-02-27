/*	
	A. Andryusha and Socks
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int, int> m;
	int mx=0;
	for (int i=0; i<2*n; ++i) {
		int x;
		scanf("%d", &x);
		m[x]++;
		if (m[x]==2)
			m.erase(x);
		else {
			if (m.size()>mx)
				mx=m.size();
			// mx = (int) max((int)m.size(), mx);
		}
	}
	printf("%d\n", mx);

	return 0;
}