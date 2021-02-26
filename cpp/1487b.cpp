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
		int n, k, temp;
		scanf("%d %d", &n, &k);
		if (n%2==0) {
			temp = k%n;
		} else {
			temp = (k+(k-1)/(n/2))%n;
		}
		printf("%d\n", temp ? temp : n);
	}

	return 0;
}