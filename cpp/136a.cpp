/*
	A. Presents
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, x;
	int a[101];
	
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> x;
		a[x]=i;
	}
	for (i=1; i<=n; i++) {
		cout << a[i];
		if (i!=n) {
			cout << " ";
		} else {
			cout << endl;
		}
	}
	
	return 0;
}
