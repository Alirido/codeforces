/*	
	A. Commentary Boxes
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n,m,a,b;
	cin >> n >> m >> a >> b;
	// scanf("%d%d%d%d", &n, &m, &a, &b);
	if (n%m==0)
		printf("0\n");
	else {
		long long build = m-(n%m), demolish=n%m;
		cout << (build*a<demolish*b? build*a : demolish*b);
	}

	return 0;

}