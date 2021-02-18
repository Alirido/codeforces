/*
	A. Colorful Stones (simplified Edition)
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int ans=0;
	for (int i=0; i<s2.length(); i++) {
		if (s1[ans]==s2[i])
			ans++;
	}
	printf("%d\n", ans+1);

	return 0;
}