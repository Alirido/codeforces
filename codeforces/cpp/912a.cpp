/*	
	A. Tricky Alchemy
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long a,b;
	cin >> a >> b;
	unsigned long long yellow, blue, x, y, z;
	cin >> x >> y >> z;
	yellow = 2*x + y;
	blue = 3*z + y;
	cout << (yellow>a? yellow-a : 0) + (blue>=b? blue-b : 0) << endl;

	return 0;
}