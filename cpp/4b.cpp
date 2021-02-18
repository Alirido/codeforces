/*
	B. Before and Exam
	Time limit 0.5 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int d, n;
	scanf("%d%d", &d, &n);
	vector<pair<int,int>> v;
	int mins=0, maxs=0;
	for (int i=0; i<d; ++i) {
		int x,y;
		scanf("%d%d", &x, &y);
		v.push_back(make_pair(x,y));
		mins+=x; maxs+=y;
	}
	if (n<mins || n>maxs)
		puts("NO");
	else {
		puts("YES");
		n-=mins; 
		int i=0;
		while (n>v[i].second-v[i].first) {
			printf("%d ", v[i].second);
			n-=v[i].second-v[i].first;
			i++;
		}
		printf("%d ", v[i].first+n);
		for (++i; i<v.size(); ++i) 
			printf("%d ", v[i].first);
	}

	return 0;
}