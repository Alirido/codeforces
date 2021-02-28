/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 7: Dynamic Programming
	D. Palindroom
	Time limit 1 s
	Memory limit 64 MB
*/

#include <bits/stdc++.h>
using namespace std;

int ans[52][52];
char str[55];
int len;

int dp(int left, int right) {
	// printf("%d - %d\n", left, right);
	if (left > right)
		return 0;
	else if (left == right)
		return 1;
	if (ans[left][right] != -1) {//memoization
		// printf("Testing masuk sini kah? %d\n", ans[left][right]);
		return ans[left][right];
	}

	if (str[left] == str[right]) {
		// printf("(%d, %d) -> Sama\n", left, right);
		ans[left][right] = 2+dp(left+1, right-1);
	} else {
		// printf("(%d, %d) -> Tidak sama\n", left, right);
		ans[left][right] = max(dp(left+1, right), dp(left, right-1));
	}
	return ans[left][right];
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	while (n--) {
		scanf("%s", str);
		getchar();
		len = strlen(str);
		for (int i=0; i<len; i++) {
			for (int j=0; j<len; j++)
				ans[i][j] = -1;
		}
		printf("%d\n", dp(0, len-1));
	}
}