/*
	A. Insomnia Cure
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
using namespace std;

int main() {
	int k,l,m,n,d;
	int dragon=0;
	
	cin >> k >> l >> m >> n >> d;
	for (int i=1; i<=d; i++) {
		if (i%k == 0 || i%l==0 || i%m==0 || i%n==0) {
			dragon++;
		}
	}
	cout << dragon << endl;
	
	return 0;
}
