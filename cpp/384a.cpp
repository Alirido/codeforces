/*	
	A. Coder
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	cout << ceil(n*n/2.0) << endl;
	for (int i=0; i<n; ++i) {
		if (i%2==0) {	
			for (int j=0; j<n; ++j) {
				if (j%2==0)
					putchar('C');
				else
					putchar('.');
			}
		} else {
			for (int j=0; j<n; ++j) {
				if (j%2==1)
					putchar('C');
				else
					putchar('.');
			}
		}
		printf("\n");
	}

	return 0;
}