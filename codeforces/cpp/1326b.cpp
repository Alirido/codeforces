/*	
	B. Maximums
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int n;
	cin >> n;
	int b[n];
	for (int i=0; i<n; i++) {
		cin >> b[i];
	}
	int a[n], x[n];
	x[0] = 0;
	a[0] = b[0];
	for (int i=1; i<n; i++) {
		x[i] = max(x[i-1], a[i-1]);
		a[i] = b[i] + x[i];
	}
	for (int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}