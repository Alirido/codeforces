/*	
	B. Diagonal Walking v.2
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	scanf("%d", &q);
	while (q--) {
		unsigned long long x,y,k;
		// scanf("%d%d%d", &x, &y, &k);
		cin >> x >> y >> k;
		if (x>y) {
			if (k<x)
				printf("-1\n");
			else {
				if ((x-y)%2==1)
					cout << k-1 << endl;
				else {
					if ((k-x)%2==1)
						cout << k - 2 << endl;
					else cout << k << endl;
				}
			}
		} else {
			if (k<y)
				printf("-1\n");
			else {
				if ((y-x)%2==1)
					cout << k-1 << endl;
				else {
					if ((k-y)%2==1)
						cout << k - 2 << endl;
					else cout << k << endl;
				}
			}
		}
	}

	return 0;
}