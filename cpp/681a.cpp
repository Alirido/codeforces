/*	
	A. A Good Contest
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	bool yes=false;
	for (int i=0; i<n; ++i) {
		string s;
		int a,b;
		cin >> s >> a >> b;
		if (!yes) {
			if (a>=2400 && b>a)
				yes=true;
		}
	}
	if (yes)
		puts("YES");
	else puts("NO");

	return 0;
}