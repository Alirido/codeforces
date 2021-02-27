/*
	A. Launch of Collider
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	int ans=1e9;
	int r=-1;
	for (int i=0; i<n; ++i) {
		if (r==-1) {
			if (s[i]=='R') 
				r=i;
		} else {
			if (s[i]=='L') {
				if (ans>(a[i]-a[r])/2)
					ans=(a[i]-a[r])/2;
				r=-1;
			} else r=i;
		}
	}
	printf("%d\n", (ans==1e9? -1 : ans));

	return 0;
}