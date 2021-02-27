/*
	B. Beautiful Paintings
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int, int> m;
	while (n--) {
		int x;
		scanf("%d", &x);
		m[x]++;
	}
	int ans = m.size()-1;
	while (m.size()>0) {
		int temp=0;
		auto it = m.begin();
		for (; it!=m.end();) {
			if (it->second == 1)
				it = m.erase(it);
			else {
				it->second--;
				temp++;
				++it;
			}
		}
		ans+=(temp==0? 0 : temp-1); 
	}
	printf("%d\n", ans);

	return 0;
}