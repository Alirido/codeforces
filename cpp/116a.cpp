/*
	A. Tram
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, a, b, i, max;
	int inTram[1001];
	
	cin >> n;
	for (i=0; i<=n-1; i++) {
		cin >> a >> b;
		if (i==0) {
			inTram[i] = b;
		} else {
			inTram[i] = inTram[i-1]-a+b;
		}
	}
	//Searching max capacity
	max = inTram[0];
	for (i=1; i<=n-2; i++) {
		if (inTram[i]>max) {
			max = inTram[i];
		}
	}
	cout << max << endl;
	
	return 0;
}
