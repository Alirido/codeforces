/*	
	B. Cover Points
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int maks=0;
	while (n--) {
		int x, y;
		scanf("%d%d", &x, &y);
		if (x+y > maks)
			maks = x+y;
	}
	printf("%d\n", maks);

	return 0;
}