/*	
	A. Counterexample
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long l,r;
	cin >> l >> r;
	if (l%2==0) {
		if (r-l>=2)
			cout << l << " " << l+1 << " " << l+2 << endl;
		else puts("-1"); 
	} else {
		if (r-l==2) {
			if (__gcd(l,r)!=1)
				cout << l << " " << l+1 << " " << l+2 << endl;
			else puts("-1");
		} else if (r-l>2)
			cout << l+1 << " " << l+2 << " " << l+3 << endl;
		else puts("-1");
	}

	return 0;
}