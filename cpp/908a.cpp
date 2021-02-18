/*	
	A. New Year and Counting Cards
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
			++ans;
		}
	}
	printf("%d\n", ans);

	return 0;
}