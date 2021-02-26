/*	
	A. Arena
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, x;
		scanf("%d", &n);
		int min=101, countMin=0;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			if (x < min) {
				min = x;
				countMin = 1;
			} else if(x == min) {
				countMin++;
			}
		}
		printf("%d\n", n-countMin);
	}

	return 0;
}