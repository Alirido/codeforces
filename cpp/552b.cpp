/*	
	B. Vanya and Books
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
unsigned long long a[11];

void makeSumList() {
	unsigned long long nine=9; a[0]=0;
	for (int i=1; i<10; ++i) {
		a[i] = a[i-1] + i*nine;
		nine *= 10;
	}
}

int main() {
	makeSumList();
	string s;
	cin >> s;
	int minus=0, l=s.length();
	for (int i=1; i<l; ++i) {
		minus = minus*10 + 9;
	}
	stringstream geek(s);
	unsigned long long temp;
	geek >> temp;
	temp -= minus;
	temp *= l;
	cout << a[l-1] + temp << endl;

	return 0;
}