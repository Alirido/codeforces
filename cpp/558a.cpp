/*
	A. Lala Land and Apple Trees
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> pos, neg;
	while(n--){
		int x,a;
		scanf("%d%d", &x, &a);
		if (x<0)
			neg.push_back(make_pair(x,a));
		else pos.push_back(make_pair(x,a));
	}
	if (!pos.empty()) sort(pos.begin(), pos.end());
	if (!neg.empty()) sort(neg.begin(), neg.end());
	int nneg=neg.size(), npos=pos.size();
	n = min(nneg, npos);
	int i=0, ans=0;
	while (i<n) {
		ans += pos[i].second+neg[nneg-i-1].second;
		++i;
	}
	if (nneg!=npos)
		ans += (npos>nneg? pos[i].second : neg[nneg-i-1].second);
	printf("%d\n", ans);

	return 0;
}