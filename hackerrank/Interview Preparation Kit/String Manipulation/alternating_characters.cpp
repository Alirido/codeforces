#include <bits/stdc++.h>
using namespace std;

int alternatingChar(string s) {
	int deletions = 0;
	for (int i=1; i<s.length(); i++) {
		if (s[i] == s[i-1])
			deletions++;
	}
	return deletions;
}

int main() {
	int q;
	scanf("%d", &q);
	while (q--) {
		string s;
		cin >> s;
		printf("%d\n", alternatingChar(s));
	}
}
