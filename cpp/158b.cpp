/*
	B. Taxi
	Time limit 3s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i,x;
	int full31, full22, taxi;
	int a[6];
	
	//Initial array
	for (i=0; i<=5; i++) {
		a[i] = 0;
	}
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> x;
		a[x]++;
	}
	//Case #1 : one taxi for four children
	taxi = a[4];
	//Case #2 : one taxe for 3 and 1 group children & 2 and 2 group children
	if (a[3]>=a[1]) {
		taxi = taxi + a[3];
		if (a[2]%2 == 0) {
			taxi = taxi + (a[2]/2);
		} else {
			taxi = taxi + (a[2]/2) + 1;
		}
	} else {
		taxi = taxi + a[3];
		a[1] = a[1]-a[3];
		if (a[2]%2 == 0) {
			taxi = taxi + (a[2]/2);
			if (a[1]%4 == 0) {
				taxi = taxi + (a[1]/4);
			} else {
				taxi = taxi + (a[1]/4) +1;
			}
		} else {
			taxi = taxi + (a[2]/2);
			if (a[1]%4 == 0) {
				taxi = taxi + (a[1]/4) + 1;
			} else {
				if (a[1]<2) {
					taxi++;
				} else {
					a[1] = a[1]-2;
					if (a[1]%4 == 0) {
						taxi = taxi + (a[1]/4) + 1;
					} else {
						taxi = taxi + (a[1]/4) + 2;
					}
				}
			}
		}
	}
	cout << taxi << endl;
	
	return 0;
}
