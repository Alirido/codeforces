/*	
	B. Playing with Paper
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long a,b;
	cin >> a >> b;
	unsigned long long ships=0;
	while (a != b) {
		ships += a/b;
		if (a%b == 0) {
			a = b;
		} else {
			unsigned long long temp = a%b;
			a = b;
			b = temp;
		}
	}
	cout << ships << endl;

	return 0;
}