/*	
	C. Table Decorations
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long r,g,b;
	// scanf("%d%d%d", &r, &g, &b);
	cin >> r >> g >> b;
	if (r>g) {
		if (r>b) {
			if (r>=(g+b)*2)
				cout << g+b << endl;
			else cout << (r+g+b)/3 << endl;
		} else {
			if (b>=(r+g)*2)
				cout << r+g << endl;
			else cout << (r+g+b)/3 << endl; 
		}
	} else {
		if (g>b) {
			if (g>=(r+b)*2)
				cout << r+b << endl;
			else cout << (r+g+b)/3 << endl;
		} else {
			if (b>=(r+g)*2)
				cout << r+g << endl;
			else cout << (r+g+b)/3 << endl;
		}
	}

	return 0;
}