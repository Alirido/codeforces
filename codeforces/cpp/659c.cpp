/*
	C. Tanya and Toys
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	map<int, bool> a;
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		a[x]=true;
	}
	int ans=0, i=1;
	vector<int> choose;
	while (m>0) {
		if (!a[i]) {
			m-=i;
			if (m>=0) {
				ans++;
				choose.push_back(i);
			}
		}
		i++;
	}
	printf("%d\n", ans);
	for (i=0; i<choose.size(); i++)
		printf("%d ", choose[i]);

	return 0;
}