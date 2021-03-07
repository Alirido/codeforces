/*
	Difficulty: Medium
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		bool isChecked[n+1] = { false };
		int arr[n+1];
		for (int i=1; i<=n; i++) {
			scanf("%d", &arr[i]);
		}
		int startpoint = n;
		int ans = 0;
		int i=n;
		while (i>0) {
			if (isChecked[arr[startpoint]]) {
				startpoint--;
				continue;
			}

			if (arr[startpoint] == i) {
				isChecked[startpoint] = true;
				startpoint--;
				i--;
			} else {
				int j=startpoint;
				int bribes = 0;
				while (arr[j] != i && bribes <= 2) {
					j--;
					if (isChecked[arr[j]])
						continue;
					bribes++;
				}
				if (bribes > 2) {
					ans = -1;
					break;
				} else {
					ans += bribes;
					isChecked[arr[j]] = true;
					i--;
				}
			}
		}
		if (ans == -1)
			printf("Too chaotic\n");
		else
			printf("%d\n", ans);
	}

	return 0;
}