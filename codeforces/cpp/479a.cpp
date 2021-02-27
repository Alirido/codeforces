/*
	A. Expression
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a==1) {
		if (c==1) {
			cout << a+b+c << endl;
		} else {
			cout << (a+b)*c << endl;
		}
	} else {
		if (b==1) {
			if (c<a) {
				cout << a*(b+c) << endl;
			} else {
				cout << (a+b)*c << endl;
			}
		} else {
			if (c==1) {
				cout << a*(b+c) << endl;
			} else {
				cout << a*b*c << endl;
			}
		}
	}
	
	return 0;
}
