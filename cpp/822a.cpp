/*	
	A. I'm bored with life
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

unsigned long long factorial(int n) {
	int ans=1;
	for (int i=2; i<=n; i++) {
		ans *= i;
	}
	return ans;
}

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int ans = min(a,b);
	printf("%I64d\n", factorial(ans));

	return 0;
}