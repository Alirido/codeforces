/*	
	A. Diverse Team
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	map<int,int> m;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		m[x]=i;
	}
	if (m.size() < k) 
		puts("NO");
	else {
		puts("YES");
		auto it = m.cbegin();
		for (int i=0; i<k; ++i) {
			printf("%d ", it->second);
			++it;
		}
	}

	return 0;
}