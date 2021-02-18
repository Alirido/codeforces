/*
	B. Bakery
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[100001][100001];

int main() {
	int n,m,k;
	scanf("%d%d%d", &n, &m, &k);
	vector<int> edge[n+1];
	while (m--) {
		int u,v,l;
		scanf("%d%d%d", &u, &v, &l);
		if (a[u][v]) {
			a[u][v]=min(a[u][v], l);
			a[v][u]=min(a[v][u], l);
		} else {
			a[u][v]=l;
			a[v][u]=l;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
	}
	map<int, bool> flour;
	for (int i=0; i<k; i++) {
		int x;
		scanf("%d", &x);
		flour[x]=true;
	}
	auto it=flour.cbegin();
	int min=1000000009;
	for (int i=0; i<k; ++i) {
		int temp=it->first;
		int ntemp=edge[temp].size();
		for (int j=0; j<ntemp; j++) {
			if (!flour[edge[temp][j]]) {
				if (min>a[temp][edge[temp][j]])
					min = a[temp][edge[temp][j]];
			}
		}
		it++;
	}
	printf("%d\n", (min==1000000009? -1 : min));

	return 0;
}