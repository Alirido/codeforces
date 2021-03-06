/*	
	A, Minutes Before the New Year
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int h, m;
		scanf("%d %d", &h, &m);
		int minutes = 60-m;
		h++;
		printf("%d\n", (24-h)*60+minutes);
	}

	return 0;
}