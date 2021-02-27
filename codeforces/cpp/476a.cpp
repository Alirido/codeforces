/*
	A. Dreamoon and Stairs
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i;
	scanf("%d%d", &n,&m);
	if (n<m) {
		cout << -1 << endl;
	} else {
		cout << ((n+(2*m-1))/(2*m))*m << endl;
	}
	return 0;
}