/*
	B. Keyboard Layouts
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char a[130];

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	for (int i=0; i<26; ++i)
		a[s1[i]]=s2[i];
	cin >> s1;
	for (int i=0; i<s1.length(); ++i) {
		if (s1[i]>='a' && s1[i]<='z')
			putchar(a[s1[i]]);
		else if (s1[i]>='A' && s1[i]<='Z') {
			char temp=s1[i];
			temp=a[temp+32];
			temp -= 32;
			putchar(temp);
		} else putchar(s1[i]);
	}

	return 0;
}