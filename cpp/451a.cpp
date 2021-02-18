/*
	A. Game With Sticks
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, m;
	
	cin >> n >> m;
	if (n<m) {
		if (n%2==0) {
			cout << "Malvika" << endl;
		} else {
			cout << "Akshat" << endl;
		}
	} else {
		if (m%2==0) {
			cout << "Malvika" << endl;
		} else {
			cout << "Akshat" << endl;
		}
	}
	
	return 0;
}
