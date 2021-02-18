/*	
	A. Perfect Squares
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool ps[1000005]; //perfect square

void initialization() {
	for (int i=0; i*i<=1000000; i++) {
		ps[i*i]=true;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	initialization();
	int mx=-1000006;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x<0) {
			if (x>mx)
				mx=x;
		} else {
			if (!ps[x]) {
				if (x>mx)
					mx=x;
			}
		}
	}
	printf("%d\n", mx);

	return 0;
}