/*
	B. Decoding
	Time limit 1 s
	Memory limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	char ans[n];
	ans[(n-1)/2] = s[0];
	int left=(n-1)/2 - 1, right=(n-1)/2 + 1;
	if (n%2==0) {
		for (int i=1; i<n; i++) {
			if (i%2==1) {
				ans[right]=s[i];
				right++;
			} else {
				ans[left]=s[i];
				left--;
			}
		}
	} else {
		for (int i=1; i<n; i++) {
			if (i%2==0) {
				ans[right]=s[i];
				right++;
			} else {
				ans[left]=s[i];
				left--;
			}
		}
	}
	for (int i=0;i<n;++i)
		putchar(ans[i]);

	return 0;
}