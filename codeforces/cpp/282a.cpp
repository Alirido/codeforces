/*
	A. Bit++
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, x;
	string s;
	
	cin >> n; x = 0;
	for (i=1; i<=n; i++) {
		cin >> s;
		int j = 0;
		while (s[j] == 'x' || s[j] == 'X') {
			j++;
		}
		if (s[j] == '+') {
			x++;
		} else if (s[j] == '-') {
			x--;
		}
	}
	cout << x << endl;
	
	return 0;
}
