/*
	A. Combination Lock
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string a, b;
	scanf("%d", &n);
	cin >> a;
	cin >> b;
	int moves=0;
	for (int i=0; i<n; i++) {
		int temp=abs(a[i]-b[i]);
		if (temp>5) {
			moves += 10-temp;
		} else {
			moves += temp;
		}
	}
	printf("%d\n", moves);
	return 0;
}