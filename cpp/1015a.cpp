/*
	A. Points in Segments
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
bool a[102];

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	while(n--) {
		int l,r;
		scanf("%d%d", &l, &r);
		for (int i=l; i<=r; ++i) {
			if (!a[i])
				a[i]=true;
		}
	}
	int ans[m], sum=0, idx=0;
	for (int i=1; i<=m; ++i) {
		if (!a[i]) {
			sum++;
			ans[idx]=i;
			idx++;
		}
	}
	printf("%d\n", sum);
	for (int i=0; i<sum; ++i)
		printf("%d ", ans[i]);

	return 0;

}