/*	
	A. QAQ
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
vector<int> v[150];
char c;

int count(int x) {
	int n=v['Q'].size();
	int cnt=0, k=0;
	if (n>0) {	
		while (v['Q'][k]<x && k<n) {
			++cnt;
			++k;
		}
	}
	return cnt*(n-cnt);
}

int main() {
	int i=1;
	while ((c=getchar()) != '\n') {
		if (c=='Q' || c=='A')
			v[c].push_back(i);
		++i;
	}
	int l = v['A'].size();
	int ans=0;
	for (int j=0; j<l; ++j) {
		ans += count(v['A'][j]);
	}
	printf("%d\n", ans);

	return 0;
}