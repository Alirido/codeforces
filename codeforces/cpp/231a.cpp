/*
	A. Team
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n;
	int i, x, pass, total;
	
	cin >> n; total = 0;
	for (i=1; i<=n; i++) {
		pass = 0;
		for (int j=1; j<=3; j++) {
			cin >> x;
			if (x == 1)  {
				pass++;
			}
		}
		if (pass>=2)
			total++;
	}
	cout << total << endl;
	
	return 0;
}
				
