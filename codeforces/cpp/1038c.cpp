/*	
	C. Gambling
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<n; i++)
		scanf("%d", &b[i]);
	sort(a, a+n);
	sort(b, b+n);
	long long sa=0, sb=0;
	int ia=n-1, ib=n-1;
	bool turnA=true;
	while (ia>=0 || ib>=0) {
		if (turnA) {
			if (ia<0)
				ib--;
			else if (ib<0) {
				sa+=a[ia];
				ia--;
			} else {
				if (a[ia]>=b[ib]) {
					sa+=a[ia];
					ia--;
				} else ib--;
			}
			turnA=false;
		} else {
			if (ib<0)
				ia--;
			else if (ia<0) {
				sb+=b[ib];
				ib--;
			} else {
				if (b[ib]>=a[ia]) {
					sb+=b[ib];
					ib--;
				} else ia--;
			}
			turnA=true;
		}
	}
	cout << sa-sb << endl;
}