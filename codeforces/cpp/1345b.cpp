/*	
	B. Card Constructions
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int int_mx = 25819;
int a[int_mx+1];

void generatePyramid() {
	for (int i=1; i<=int_mx; i++) {
		a[i] = (3*i*i + i)/2;
	}
}

int main() {
	fast_io;
	int t;
	cin >> t;
	map<int, int> memo;
	generatePyramid();
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		int i = int(sqrt(n*2/3));
		while (n > 1) {
			if (a[i] > n)
				i--;
			else {
				n -= a[i];
				ans++;
				i = int(sqrt(n*2/3));
			}
		}
		cout << ans << endl;
	}

	return 0;
}