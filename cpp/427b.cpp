/*
	B. Prison Transfer
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, c;
	scanf("%d%d%d", &n, &t, &c);
	int ans=0, temp=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (temp==c) {
			if (x<=t)
				ans++;
			else temp=0;
		} else {
			if (x<=t) {
				if (++temp==c)
					ans++;
			}
			else temp=0;
		}
	}
	printf("%d\n", ans);

	return 0;
}