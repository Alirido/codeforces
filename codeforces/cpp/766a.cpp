/*	
	A. Mahmoud and Longest Uncommon Subsequence
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string a,b;
	cin >> a;
	cin >> b;
	if (a==b)
		puts("-1");
	else
		printf("%d\n", max(a.length(), b.length()));

	return 0;
}