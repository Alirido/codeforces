/*
	B. Xenia and Ringroad
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, x;
	long long time=0;
	int temp;
	
	scanf("%d %d", &n, &m);
	for (i=1; i<=m; i++) {
		scanf("%d", &x);
		if (i==1) {
			time = time + x-1;
		} else {
			if (x>=temp) {
				time = time + (x-temp);
			} else {
				time = time + (n-temp+x);
			}
		}
		temp = x;
	}
	cout << time << endl;
	
	return 0;
}
