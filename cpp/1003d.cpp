/*	
	D. Coins and Queries
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,q;
	scanf("%d%d", &n, &q);
	//initialization
	map<int, int> m;
	m[0]=-1;
	// for (int i=2; i<=30; i++) m[(int) pow(2, i)]=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		m[x]++;
	}
	while (q--) {
		int x;
		scanf("%d", &x);
		auto it = m.cend(); --it;
		while (it->first > x) --it;
		int ans=0;
		while (x>0 && it!=m.begin()) {
			int minus = min(it->second, x/(it->first));
			x -= minus*it->first;
			ans += minus;
			it--;
		}
		if (x!=0) puts("-1");
		else printf("%d\n", ans);
	}

	return 0;
}