/*	
	A. Boring Apartments
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		string x;
		cin >> x;
		int ln = x.length();
		int n = x[0] - '0';
		printf("%d\n", (n-1)*10 + (ln+1)*ln/2);
	}

	return 0;
}