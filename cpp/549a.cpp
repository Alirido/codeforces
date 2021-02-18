/*	
	A. Face Detection
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
string s[50];

bool detect(int i, int j) {
	bool a[130];
	a['f']=false; a['a']=false; a['c']=false; a['e']=false;
	a[s[i][j]]=true;
	a[s[i][j+1]]=true;
	a[s[i+1][j]]=true;
	a[s[i+1][j+1]]=true;
	return (a['f'] && a['a'] && a['c'] && a['e']);
}

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; i++) {
		cin >> s[i];
	}
	if (n==1 || m==1)
		printf("0\n");
	else {
		int ans=0;
		for (int i=0; i<n-1; i++) {
			for (int j=0; j<m-1; j++) {
				if (s[i][j]=='f' || s[i][j]=='a' || s[i][j]=='c' || s[i][j]=='e')
					ans += detect(i,j);
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}