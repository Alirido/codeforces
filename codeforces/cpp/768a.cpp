/*	
	A. Oath of the Night's Watch
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int front=0, back=n-1;
	if (a[front]==a[back])
		putchar('0');
	else {
		while (a[front]==a[front+1] && front<n-1) ++front;
		while (a[back]==a[back-1] && back>0) --back;
		printf("%d\n", back-front-1);
	}

	return 0;
}