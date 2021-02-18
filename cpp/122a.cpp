/*
	A. Lucky Division
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i;
	bool lucky;
	cin >> n;
	if (n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74==0 || n%447==0 || 
	n%474 == 0 || n%477 == 0) {
		lucky = true;
	} else {
		lucky = true;
		while (lucky && n!=0) {
			int t = n%10;
			if (t != 4 && t != 7) {
				lucky = false;
			}
			n = n/10;
		}
	}
	if (lucky) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}
