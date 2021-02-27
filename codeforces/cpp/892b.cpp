/*
	A. Wrath
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	int a[n+1];
	for (i=0; i<n; i++) {
		cin >>a[i];
	}
	int dead=a[n-1]; i=n-1;
	while (dead<n-1 && i>0) {
		if	
			if ((n-dead) > (i+1-a[i])) {
				dead += (n-dead)-(i+1-a[i]);
			}
		i--;
		cout << dead << endl;
	}
	if (dead>=n-1) {
		printf("1\n");
	} else {
		printf("%d\n", n-dead);
	}
	return 0;
}