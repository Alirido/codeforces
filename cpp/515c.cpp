/*	
	C. Drazil and Factorial
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int ans[10];
char c;

int main() {
	int n;
	scanf("%d\n", &n);
	// for (int i=0; i<n; ++i)
	while ((c=getchar()) != '\n') {
		if (c == '9') {
			ans[7]++;
			ans[3] += 2;
			ans[2]++;
		} else if (c == '8') {
			ans[7]++;
			ans[2] += 3;
		} else if (c == '6') {
			ans[5]++;
			ans[3]++;
		} else if (c == '4') {
			ans[3]++;
			ans[2] += 2;
		} else {
			ans[c-'0']++;
		}
	}
	for (int i=7; i>=2; i--) {
		for (int j=1; j<=ans[i]; j++) {
			printf("%d", i);
		}
	}

	return 0;
}