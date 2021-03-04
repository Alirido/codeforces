/*	
	C. Move Brackets
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
		string s;
		cin >> s;
		int isOpen = 0, ans = 0;
		for (int i=0; i<n; i++) {
			if (s[i] == ')') {
				if (isOpen > 0)
					isOpen--;
				else
					ans++;
			} else
				isOpen++;
		}
		printf("%d\n", ans);

	}

	return 0;
}