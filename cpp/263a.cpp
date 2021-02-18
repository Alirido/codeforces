/*
	A. Beautiful Matrix
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int x, ix, iy;
	int i, j;
	
	for (i=1; i<=5; i++) {
		for (j=1; j<=5; j++) {
			cin >> x;
			if (x==1) {
				ix = i;
				iy = j;
			}
		}
	}
	cout << abs(ix-3)+abs(iy-3) << endl;
	
	return 0;
}
