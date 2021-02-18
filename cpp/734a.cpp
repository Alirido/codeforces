/*
	A. Anton and Danik
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	string s;
	int suma=0, sumd=0;
	scanf("%d", &n);
	cin >> s;
	for (i=0; i<n; i++) {
		if (s[i]=='A') {
			suma++;
		} else {
			sumd++;
		}
	}
	if (suma>sumd) {
		printf("Anton\n");
	} else if (suma<sumd) {
		printf("Danik\n");
	} else {
		printf("Friendship\n");
	}
	
	return 0;
}
