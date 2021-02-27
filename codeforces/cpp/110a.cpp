/*
	A. Nearly Lucky Number
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	unsigned long long int n;
	int nl=0; // The number of lucky digits
	
	cin >> n;
	int t;
	while (n!=0) {
		t = n%10;
		if (t==4 || t==7) {
			nl++;
		}
		n = n/10;
	}
	if (nl==4 || nl==7) {
		cout << "YES" <<endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
