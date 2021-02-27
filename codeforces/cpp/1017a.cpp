/*
	A. The Rank
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int,int>> scores;
	for (int i=1; i<=n; ++i) {
		int a,b,c,d, sum;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		sum = a+b+c+d;
		scores.push_back(make_pair(sum, i));
	}
	sort(scores.begin(), scores.end(), cmp);
	// for (int i=0; i<scores.size(); ++i) {
	// 	cout << scores[i].first << " " << scores[i].second << endl;
	// }
	int i=0;
	while (scores[i++].second!=1) ;
	printf("%d\n", i);

	return 0;
}