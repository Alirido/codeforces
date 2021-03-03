/*	
	B. Restore the Permutation by Merger
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		vector<int> ans;
		bool isExist[2*n + 1] = { false };
		for (int i=0; i<2*n; i++) {
			int x;
			scanf("%d", &x);
			if (isExist[x] != true) {
				ans.push_back(x);
				isExist[x] = true;
			}
		}
		for (auto& it : ans)
			printf("%d ", it);
		printf("\n");
	}

	return 0;
}