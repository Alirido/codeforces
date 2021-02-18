/*
	A. Cheap Travel
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b;
	
	scanf("%d %d %d %d", &n, &m, &a, &b);
	if (b/m < a) {
		if (n%m==0) {
			cout << (n/m)*b << endl;
		} else {
			if ((n%m)*a <= b) {
				cout << (n/m)*b + (n%m)*a << endl;
			} else {
				cout << ((n/m)+1)*b << endl;
			}
		}
	} else {
		cout << n*a << endl;
	}
	
	return 0;
}
