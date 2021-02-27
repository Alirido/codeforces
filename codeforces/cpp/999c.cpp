/*	
	C. Alphabetic Removals
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[150];
int deleted[150];

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	string s;
	cin >> s;
	if (n<=k) {
		printf("\n");
	} else {
		for (int i=0; i<s.length(); i++) {
			a[s[i]]++;
		}
		char c='a';
		while (k>0) {
			while (a[c]==0) {
				c++;
			}
			if (a[c]>=k) {
				deleted[c] = k;
				k = 0;
			} else {
				deleted[c] = a[c];
				k -= a[c];
				a[c] = 0;
			}
		}
		for (int i=0; i<s.length(); i++) {
			if (deleted[s[i]]>0) {
				deleted[s[i]]--;
			} else {
				cout << s[i];
			}
		}printf("\n");
	}

	return 0;
}