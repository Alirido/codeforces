/*	
	A. Nastya and an Array
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int,int> m;
	int seconds=0;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		if (x != 0) {
			m[x]++;
			if (m[x] == 1) {
				seconds++;
			}
		}
	}
	printf("%d\n", seconds);

	return 0;
}