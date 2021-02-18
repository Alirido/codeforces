/*
	B. Segment Occurrences
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>> v;

int main() {
	int n,m,q, temp=0;
	scanf("%d%d%d", &n, &m, &q);
	string s,t;
	cin >> s;
	cin >> t;
	string::size_type pos = 0;
	while ((pos = s.find(t, pos)) != string::npos) {
		v.push_back(make_pair(pos, temp+1));
		temp++;
		pos++;
	}
	v.push_back(make_pair(-1,-1));
	int le=t.length(); 
	while (q--) {
		int l, r, ans=0, i=0;
		scanf("%d%d", &l, &r);
		while (v[i].first<l-1 && i<v.size()-1) i++;
		if (i!=v.size()-1) {
			int j=v.size()-2;
			while (v[j].first>r-le && j>=i) j--;
			if (j>=i)
				ans = v[j].second-v[i].second+1;
		}
		printf("%d\n", ans);
	}

	return 0;
}