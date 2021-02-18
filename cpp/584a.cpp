/*
	A. Olesya and Rodion
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	scanf("%d %d", &n, &t);
	for (int i=0; i<n; i++) {
		if (t==10) {
			if (n>1) {
				printf("1");
				t=0;
			} else {
				printf("-1");
			}
		} else {
			printf("%d", t);
		}
	}
	cout << endl;
	
	return 0;
}
		
