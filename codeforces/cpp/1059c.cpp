/*	
	C. Sequence Transformation
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int k=1;
	while (n) {
		if (n<=3) {
			for (int i=0; i<n-1; i++) {
				printf("%d ", k);
			}
			printf("%d ", k*n);
			n=0;
		} else {
			int temp = (n+1)/2;
			for (int i=0; i<temp; i++)
				printf("%d ", k);
			n -= temp;
			k *= 2;
		}
	}

	return 0;
}