/*
	A. Amusing Joke
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2,s3;
	char c;
	int i;
	struct letter {
		int name;
		int pile;
	} a[92];
	
	for (c='A'; c<='Z'; c++) {
		a[c].name=0;
		a[c].pile=0;
	}
	cin >> s1;
	cin >> s2;
	cin >> s3;
	for (i=0; i<s1.length(); i++) {
		a[s1[i]].name++;
	}
	for (i=0; i<s2.length(); i++) {
		a[s2[i]].name++;
	}
	for (i=0; i<s3.length(); i++) {
		a[s3[i]].pile++;
	}
	c='A';
	bool complete=true;
	while (c<='Z' && complete) {
		if (a[c].name!=a[c].pile) {
			complete=false;
		} else {
			c++;
		}
	}
	if (complete) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}
