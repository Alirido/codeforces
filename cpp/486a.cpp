/*
	A. Calculating Function
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	long long int n, i;
	
	cin >> n;
	if (n%2==0) {
		cout << n/2 << endl;
	} else {
		cout << (n/2) - n << endl;
	}
		
	return 0;
}
