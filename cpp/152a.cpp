/*
	A. Marks
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
string s[101];

char maks(int n, int pos) {
	char result='0';
	for (int i=0; i<n; ++i) {
		if (s[i][pos]>result)
			result = s[i][pos];
	}
	return result;
}

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; ++i)
		cin >> s[i];
	char c[m]; 
	for (int i=0; i<m; ++i) {
		c[i]=maks(n, i);
	}
	map<int, bool> ans;
	for (int i=0; i<m; i++) {
		for (int j=0 ;j<n; ++j) {
			if (s[j][i]==c[i])
				ans[j]=true;
		}
	}
	cout << ans.size();

	return 0;
}