/*	
	C. Permutation Game 
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int idx[100001];

int main() {
	int n;
	scanf("%d", &n);
	int a[n][2];
	memset(a, -1, sizeof(a[0][0])*n*2);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i][0]);
		idx[a[i][0]] = i;
	}
	// Proses penentuan kalah menang dari suatu posisi
	for (int i=n; i>0; i--) {
		int bw = idx[i]-i; // bw = backward
		bool win = false;
		while (bw>=0 && !win) {
			if (a[bw][0]>i) {
				if (!a[bw][1])
					win=true;
				else bw -= i;
			} else bw -= i;
		}
		int fw = idx[i]+i; // fw = forward
		while (fw<n && !win) {
			if (a[fw][0]>i) {
				if (!a[fw][1])
					win=true;
				else fw += i;
			} else fw += i;
		}
		a[idx[i]][1]=win;
	}

	// Printing
	for (int i=0; i<n; i++) {
		if (a[i][1])
			putchar('A');
		else putchar('B');
	}

	return 0;
}