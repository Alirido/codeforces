/*	
	B. DYZ Lovs Strings
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[130];

int main() {
	string s;
	cin >> s;
	int k;
	scanf("%d", &k);
	int mx=-1;
	for (int i='a'; i<='z'; ++i) {
		scanf("%d", &a[i]);
		if (a[i]>mx)
			mx=a[i];
	}
	int n=s.length(), ans=0;
	for (int i=1; i<=n; ++i) {
		ans += i*a[s[i-1]];
	}
	for (int i=n+1; i<=n+k; i++) {
		ans += i*mx;
	}
	printf("%d\n", ans);

	return 0;
}