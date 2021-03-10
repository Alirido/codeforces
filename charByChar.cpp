#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		getchar();
		map<char, int> count;
		for (int i=0; i<n; i++) {
			char c;
			cin.get(c);
			while (c != '\n') {
				count[c]++;
				cin.get(c);
			}
		}
		bool yes = true;
		for (auto const& it : count) {
			if (it.second%n != 0) {
				yes = false;
				break;
			}
		}
		printf("%s\n", yes? "YES" : "NO");
	}

	return 0;
}