/*	
	C. Kefa and Park
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool cat[100001];
vector<int> v[100001];
int ans, n, m;

// Using DFS
void dfs(int current, int parent, int cnt) {
	if (cat[current])
		cnt++;
	else cnt=0;
	if (cnt>m)
		return;
	bool leaf=true;
	for (int i=0; i<v[current].size(); ++i) { // To check children of current parent
		if (v[current][i] != parent) {
			leaf=false;
			dfs(v[current][i], current, cnt);
		}
	}
	if (leaf)
		ans++;
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i=1; i<=n; i++)
		scanf("%d", &cat[i]);
	for (int i=1; i<n; i++) {
		int x,y;
		scanf("%d%d", &x, &y);
		v[y].push_back(x);
		v[x].push_back(y);
	}
	dfs(1, 0, 0);
	printf("%d\n", ans);

	return 0;
}