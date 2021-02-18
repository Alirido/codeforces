/*	
	B. 3-palindrome
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; ++i) {
		if (i%4==1 || i%4==2)
			putchar('a');
		else putchar('b');
	}
	return 0;
}