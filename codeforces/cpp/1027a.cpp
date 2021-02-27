/*	
	A. Palindromic Twist
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		string s;
		cin >> s;
		bool yes=true;
		int i=0;
		while(yes && i*2 < n) {
			int temp = abs(s[n-i-1]-s[i]);
			if (temp==2 || temp==0)
				i++;
			else yes=false;
		}
		if (yes)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}