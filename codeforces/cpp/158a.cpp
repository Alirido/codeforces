/*
	A. Next Round
	Time limit 3s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, k, x, i;
	int total, pivot;
	
	cin >> n >> k;
	total = 0;
	for (i=1; i<=n; i++) {
		cin >> x;
	  if (x > 0) { 
		if (i<=k) {
			if (i == k) {
				pivot = x;
			}
			total++;
		} else {
			if (x == pivot) {
				total++;
			}
		}
	  } 
	}
	cout << total << endl;
	
	return 0;
}
