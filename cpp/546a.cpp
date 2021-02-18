/*
	A. Soldier and Bananas
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int k, n, w;
	int borrow;
	
	cin >> k >> n >> w;
	borrow = (w*(w+1)/2)*k - n;
	if (borrow<0) {
		cout << 0 << endl;
	} else {
		cout << borrow << endl;
	}
	
	return 0;
}
