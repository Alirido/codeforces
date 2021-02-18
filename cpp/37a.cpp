/*	
	A. Towers
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int, int> mp;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		mp[x]++;
	}
	int sum=0, max = -1;
	for (auto i : mp) {
		sum++;
		if (i.second > max) {
			max = i.second;
		}
	}
	printf("%d %d\n", max, sum);

	return 0;
}