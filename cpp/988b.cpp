/*
	B. Substrings Sort
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(string x, string y) {
	return x.size()<y.size();
}

int main() {
	int n, i=0;
	scanf("%d", &n);
	string a[n];
	for (; i<n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	bool yes=true;
	i=1;
	while (yes && i<n) {
		yes &= a[i].find(a[i-1]) != string::npos;
		++i;
	}
	if (yes) {
		puts("YES");
		for (i=0; i<n; ++i)
			cout << a[i] << endl;
	} else puts("NO");

	return 0;
}