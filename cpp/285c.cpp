/*
	C. Building Permutation
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[300001], n; // to store existence integer in permutation

int main() {
	scanf("%d", &n);
	vector<int> v;
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		if (x<1 || x>n)
			v.push_back(x);
		else if (a[x])
			v.push_back(x);
		else a[x]++;
	}
	sort(v.begin(), v.end());
	int ix=1;
	unsigned long long ans=0;
	for (int i=0; i<v.size(); ++i) {
		while (a[ix]!=0) ++ix;
		ans += abs(v[i]-ix);
		ix++;
	}
	cout << ans << endl;

	return 0;
}