/*	
	A. Watchmen
	Time limit 3 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	map<int, int> nx,ny;
	map< pair<int, int>, int> npair;
	while (n--) {
		int x,y;
		scanf("%d%d", &x, &y);
		nx[x]++;
		ny[y]++;
		npair[make_pair(x,y)]++;
	}
	long long ans=0;
	for (map< pair<int,int>, int>::iterator it = npair.begin(); it!=npair.end(); it++) {
		while (it->second > 0) {
			nx[it->first.first]--; ny[it->first.second]--;
			ans += nx[it->first.first] + ny[it->first.second] - (it->second - 1);
			it->second--;
		}
	}
	cout << ans << endl;

	return 0;
}