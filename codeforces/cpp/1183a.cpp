/*	
	A. Nearest Interesting Number
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int sumDigit(int a) {
	int result = 0;
	while (a > 0) {
		result += a%10;
		a /= 10;
	}
	return result;
}

int main() {
	fast_io;
	int a;
	cin >> a;
	int sum = sumDigit(a);
	while (sum%4 != 0) {
		a++;
		sum = sumDigit(a);
	}
	cout << a << endl;

	return 0;
}