/*
	A. IQ test
	Time limit 2 s
	Memory Limit 256 MB
*/

/*Note :
 * evenness adalah keserasian bilangan dalam bidang genap
 * atau ganjil nya
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, odd=0, even=0;
	int a[102];
	int lastodd, lasteven;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		if (a[i]%2==0) {
			even++;
			lasteven=i;
		} else {
			odd++;
			lastodd=i;
		}
	}
	if (even==1) {
		cout << lasteven << endl;
	} else {
		cout << lastodd << endl;
	}
	
	return 0;
}
