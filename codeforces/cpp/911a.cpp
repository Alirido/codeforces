/*
	A. Nearest Minimums
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int,int>> v;
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		v.push_back(make_pair(x, i));
	}
	sort(v.begin(), v.end());
	int i=1, ans=1e9+1;
	while (v[i].first==v[i-1].first) {
		ans = min(ans, v[i].second-v[i-1].second);
		++i;
	}
	printf("%d\n", ans);

	return 0;
}