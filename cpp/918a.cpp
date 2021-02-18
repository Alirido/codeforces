/*	
	A. Eleven
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool a[1001];

void fibonacci() {
	a[1]=true; a[2]=true;
	int one=1, two=2, i;
	while (one + two <= 1000) {
		i = one + two;
		a[i] = true;
		one = two;
		two = i;
	}
}

int main() {
	fibonacci();
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; ++i) {
		if (a[i])
			putchar('O');
		else putchar('o');
	}

	return 0;
}