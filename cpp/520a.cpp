/*
	A. Pangram
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n, i;
	bool letter[125];
	
	for (char c='a'; c<='z'; c++) {
		letter[c]=false;
	}
	scanf("%d", &n);
	cin >> s;
	for (i=0; i<n; i++) {
		if (s[i]>='A' && s[i]<='Z') {
			s[i]=s[i]+('a'-'A');
		}
		if (!letter[s[i]]) {
			letter[s[i]]=true;
		}
	}
	char c='a';
	bool pangram=true;
	while (c<='z' && pangram) {
		if (!letter[c]) {
			pangram=false;
		} else {
			c++;
		}
	}
	if (pangram) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}
