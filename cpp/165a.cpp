/*
	A. Supercentral Point
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
vector<int> x[2001];
vector<int> y[2001];

int main() {
	int n;
	scanf("%d", &n);
	map<int, bool> mx,my;
	while (n--) {
		int a,b;
		scanf("%d%d", &a, &b);
		x[a+1000].push_back(b+1000);
		y[b+1000].push_back(a+1000);
		mx[a+1000]=true;
		my[b+1000]=true;
	}
	//sorting
	auto itx = mx.cbegin();
	for (; itx!=mx.cend(); ++itx) {
		sort(x[itx->first].begin(), x[itx->first].end());
	}
	auto ity = my.cbegin();
	for (; ity!=my.cend(); ++ity) {
		sort(y[ity->first].begin(), y[ity->first].end());
	}
	auto i = mx.cbegin();
	int ans=0;
	for (; i!=mx.cend(); ++i) {
		int temp=i->first;
		if (x[temp].size()>=3){
			int ntemp=x[temp].size();
			for (int idx=1; idx<ntemp-1; idx++) {
				if (y[x[temp][idx]].size()>2) {
					int j=0;
					while (y[x[temp][idx]][j++]!=temp);
					if (j!=1 && j!=y[x[temp][idx]].size())
						ans++;
				}
				// ans += (y[x[temp][idx]].size()-2>0? y[x[temp][idx]].size()-2 : 0);
			}
		}
	}
	printf("%d\n", ans);
	// Testing dulu
	// cout << ans << " sampe sini bisa ngga? " << i->first << endl;

	return 0;
}