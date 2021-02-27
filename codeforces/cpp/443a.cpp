/*
	A. Anton and Letters
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int i=1, count=0;
	bool a[125];
	
	getline(cin, s);
	if (s.length()==2) {
		printf("0\n");
	} else {
		memset(a, false, 124);
		while (i<s.length()) {
			if (!a[s[i]]) {
				count++;
				a[s[i]]=true;
			}
			i=i+3;
		}
		printf("%d\n", count);
	}
	
	return 0;
}
