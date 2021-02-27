/*	
	C. Dishonest Sellers
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n], b[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<n; i++)
		scanf("%d", &b[i]);
	vector< pair<int,int> > v;
	for (int i=0; i<n; i++) {
		v.push_back(make_pair((a[i]-b[i]), i));
	}
	sort(v.begin(), v.end());
	int ans=0;
	for (int i=0; i<n; i++) {
		if (k>0) {
			ans += a[v[i].second];
			k--;
		} else {
			if (v[i].first<=0)
				ans += a[v[i].second];
			else ans += b[v[i].second];
		}
	}
	printf("%d\n", ans);

	return 0;
}