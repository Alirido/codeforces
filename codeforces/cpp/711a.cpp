/*
	A. Bus to Udayland
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	string s[n+1];
	bool empty=false; 
	for (i=0; i<n; i++) {
		cin >> s[i];
		if (!empty) {	
			if (s[i][0]=='O' && s[i][1]=='O') {
				empty=true;
				s[i][0]='+';
				s[i][1]='+';
			} else if (s[i][3]=='O' && s[i][4]=='O') {
				empty=true;
				s[i][3]='+';
				s[i][4]='+';
			} 
		}
	}
	if (empty) {
		printf("YES\n");
		for (i=0; i<n; i++) {
			cout << s[i] << endl;
		}
	} else {
		printf("NO\n");
	}
	return 0;
}
	