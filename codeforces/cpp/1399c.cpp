/*	
	C. Boats Competition
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> cnt(2*n+1);
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			cnt[x]++;
		}
		int ans = 0;
		for (int s=2; s<=2*n; s++) {
			int cur_sum = 0;
			for (int i=1; i<(s+1)/2; i++) {
				cur_sum += min(cnt[i], cnt[s-i]);
			}
			if ((s&1) != 1) cur_sum += cnt[s/2]/2;
			ans = max(ans, cur_sum);
		}
		cout << ans << endl;
	}

	return 0;
}