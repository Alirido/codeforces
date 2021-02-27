/*
	A. Epic Game
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return b == 0? a: gcd(b, a%b);
}

int main() {
	int a, b, n;
	int winner;
	bool siwonTurn=true;
	
	cin >> a >> b >> n;
	while (n>0) {
		if (siwonTurn) {
			n=n-gcd(n,a);
			winner=0;
			siwonTurn=false;
		} else {
			n=n-gcd(n,b);
			winner=1;
			siwonTurn=true;
		}
	}
	cout << winner << endl;
	
	return 0;
}
