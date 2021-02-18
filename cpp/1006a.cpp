/*
	A. Adjacent Replacements
	Time limit 1 s
	Memory limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i]%2==0)
			a[i]--;
	}
	for (int i=0; i<n; ++i)
		printf("%d ", a[i]);

	return 0;
}