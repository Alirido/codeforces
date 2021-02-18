/*	
	A. Cinema Line
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[102];

int main() {
	int n;
	scanf("%d", &n);
	bool noChange=false; // Tidak ada kembalian
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		if (!noChange) {
			if (x==100) {
				if (a[50] == 0) {
					a[25] -= 3;
				} else {
						a[25]--;
						a[50]--;
				}
			} else if (x==50) {
				a[25]--;
			}
			if (a[25]<0 || a[50]<0) {
				noChange = true;
			} else {
				a[x]++;
			}
		}
	}
	if (noChange) {
		puts("NO");
	} else {
		puts("YES");
	}
	/*int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int myMoney=0, i=0;
	myMoney -= a[i]-25;
	while (myMoney>=0 && i<n-1) {
		myMoney += a[i];
		i++;
		myMoney -= a[i]-25;
	}
	if (myMoney<0) {
		puts("NO");
	} else {
		puts("YES");
	}*/

	return 0;
}