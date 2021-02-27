/*
	A. Kefa and First Steps
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, x, temp;
	int count, max;
	
	cin >> n;
	if (n==1) {
		cout << 1 << endl;
	} else {
		count=0;
		temp=0;
		max = 0;
		for (i=1; i<=n; i++) {
			cin >> x;
			if (i==n) {
				if (x>=temp) {
					count++;
				}
				if (count>max) {
					max = count;
				}
			} else {
				if (x>=temp) {
					count++;
				} else {
					if (count>max) {
						max = count;
					}
					count=1;
				}
			}
			temp=x;
		}
		cout << max << endl;
	}
	
	return 0;
}
		
