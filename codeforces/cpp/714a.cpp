/*
	A. Meeting of Old Friends
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long l1,r1,l2,r2,k, ans=0;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	if (l2<l1) {
		if (r2>=l1 && r2<=r1) {
			if (k>=l1 && k<=r2)
				ans=r2-l1;
			else ans=r2-l1+1;
		} else if (r2>r1) {
			if (k>=l1 && k<=r1)
				ans=r1-l1;
			else ans=r1-l1+1;
		}
	} else if (l2>=l1 && l2<=r1) {
		if (r2<=r1) {
			if (k>=l2 && k<=r2)
				ans=r2-l2;
			else ans=r2-l2+1;
		} else {
			if (k>=l2 && k<=r1)
				ans=r1-l2;
			else ans=r1-l2+1;
		}
	}
	cout << ans << endl;

	return 0;
}