/*
	A. Vladik and flights
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,b;
	scanf("%d%d%d", &n, &a, &b);
	string s;
	cin >> s;
	if (s[a-1]==s[b-1])
		putchar('0');
	else putchar('1');

	return 0;
}