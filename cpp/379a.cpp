/*
	A. New Year Candles
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	int hour, rest;
	
	cin >> a >> b;
	hour = a;
	while (a>=b) {
		rest=a%b;
		a=a/b;
		hour = hour+a;
		a=a+rest;
	}
	cout << hour << endl;
	
	return 0;
}
