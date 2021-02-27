/*
	B. Bakery
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
bool flour[100001];

int main() {
	int n,m,k;
	scanf("%d%d%d", &n, &m, &k);
	vector<pair<int,int>> a[n+1];
	while (m--) {
		int u,v,l;
		scanf("%d%d%d", &u, &v, &l);
		a[u].push_back(make_pair(v,l));
		a[v].push_back(make_pair(u,l));
	}
	int nk[k];
	for (int i=0; i<k; i++) {
		int x;
		scanf("%d", &nk[i]);
		flour[nk[i]]=true;
	}
	int min=1000000009;
	for (int i=0; i<k; ++i) {
		int ntemp=a[nk[i]].size();
		for (int j=0; j<ntemp; j++) {
			if (!flour[a[nk[i]][j].first]) {
				if (min>a[nk[i]][j].second)
					min = a[nk[i]][j].second;
			}
		}
	}
	printf("%d\n", (min==1000000009? -1 : min));

	return 0;
}