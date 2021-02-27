/*
	A. Links and Pearls
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[130];
char c;
int main() {
	string s;
	while ((c=getchar()) != '\n')
		a[c]++;
	if (a['o']==0)
		puts("YES");
	else {
		if (a['-']%a['o']==0)
			puts("YES");
		else puts("NO");
	}

	return 0;
}