/*
	A. Design Tutorial: Learn from Math
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>
//#include <cmath>

using namespace std;
/*
bool isComposite(int x) {
	if (x>3) {
		int i=2;
		while (x%i!=0 && i<=sqrt(x)) {
			i++;
		}
		if (x%i==0) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}
* */

int main() {
	int n;
	
	cin >> n;
	if (n%2==0) {
		cout << 4 << " " << n-4 << endl;
	} else {
		cout << 9 << " " << n-9 << endl;
	}
	
	return 0;
}
