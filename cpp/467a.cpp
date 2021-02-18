/*
	A. George and Accommodation
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, p, q;
	int nr=0; // the Number of Room
	
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> p >> q;
		if (q-p>=2) {
			nr++;
		}
	}
	cout << nr << endl;
	
	return 0;
}
