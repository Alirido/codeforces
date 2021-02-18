/*
	A. Hungry Student Problem
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		bool ans=false;
		int i=0;
		while (!ans && (x-(i*7))>=0) {
			if ((x-(i*7))%3==0)
				ans=true;
			else ++i;
		}
		if (ans)
			puts("YES");
		else puts("NO");
	}

	return 0;
}