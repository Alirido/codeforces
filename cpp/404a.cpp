/*	
	A. Valera and X
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int n;
	scanf("%d\n", &n);
	char a[n][n];
	map<char, int> m;
	for (int i=0; i<n; ++i) {
		int j=0;
		while ((c=getchar()) != '\n') {
			a[i][j]=c;
			if (i != j && j!=n-i-1)
				m[a[i][j]]++;
			j++;
		}
	}
	bool yes=(a[0][0]==a[0][1]? false : true);
	int i=0; char mark=a[0][0];
	while (yes && i<n) {
		if (i == n/2) {
			if (a[i][i]!=mark)
				yes=false;
		} else {
			if (a[i][n-i-1]!=mark || a[i][i]!=mark)
				yes=false;
		}
		++i;
	}
	if (yes) {
		auto it=m.cbegin();
		if (m.size()==1 && it->second==(n*n)-(2*n-1))
			puts("YES");
		else puts("NO");
	} else puts("NO");

	return 0;
}