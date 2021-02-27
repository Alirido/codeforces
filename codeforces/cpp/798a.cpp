/*	
	A. Mike and palindrome
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int change=0, i=0, n=s.length();
	while (change<=1 && i<n/2) {
		if (s[i] != s[n-1-i])
			++change;
		i++;
	}
	if (change<=1) {
		if (s.length()%2==1)
			puts("YES");
		else {
			if (change==1)
				puts("YES");
			else puts("NO");
		}
	}
	else puts("NO");

	return 0;
}