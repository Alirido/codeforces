/*	
	B. Two Buttons
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int count=0;
	if (n<m) {
		while (n<m) {
			count++;
			n *= 2;
		}
		int t=n-m, a=count;
		while (t > 1) {
			int d = pow(2, a);
			// cout << d << endl;
			if (t >= d) {
				count += t/d;
				t %= d;
			}
			a--;
		}

		count += t;
	} else {
		count = n - m;
	}
	printf("%d\n", count);

	return 0;
}