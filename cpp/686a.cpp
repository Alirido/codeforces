/*	
	A. Free Ice Cream
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	unsigned long long x;
	cin >> n >> x;
	int distress=0;
	for (int i=0; i<n; i++) {
		string s; int d;
		cin >> s >> d;
		if (s[0]=='+') {
			x += d;
		} else {
			if (x>=d) {
				x -= d;
			} else {
				distress++;
			}
		}
	}
	// printf("%d %d\n", x, distress);
	cout << x << " " << distress << endl;
	return 0;
}