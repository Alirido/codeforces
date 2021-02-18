/*
	A. Mike and Fax
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int k;
	scanf("%d", &k);
	if (s.length()%k!=0) 
		puts("NO");
	else {
		int i=0;
		int n=s.length()/k;
		char c[n];
		bool yes=true;
		while (yes && i<s.length()) {
			for (int j=0; j<n; ++j) {
				c[j]=s[i];
				i++;
			}
			// check whether palindrome or not
			int j=0;
			while (yes && j<n/2) {
				if (c[j]!=c[n-j-1])
					yes=false;
				j++;
			}
		}
		if (yes)
			puts("YES");
		else puts("NO");
	}

	return 0;
}