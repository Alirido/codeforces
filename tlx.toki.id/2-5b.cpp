/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 5: Divide and Conquer
	B, Pangkat Besar
	Time limit 1 s
	Memory limit 64 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll limit = 1000000;
bool isGreaterThanLimit = false;

ll pow(ll a, ll b) {
	if (b==1) {
		if (a >= limit)
			isGreaterThanLimit = true;
		return a%limit;
	}
	if (b%2 == 0) {
		ll temp = pow(a, b/2);
		ll tempReturn = temp*temp;
		if (tempReturn >= limit)
			isGreaterThanLimit = true;
		return tempReturn%limit;
	} else {
		ll tempReturn = a*pow(a, b-1);
		if (tempReturn >= limit)
			isGreaterThanLimit = true;
		return tempReturn%limit;
	}
}

int main() {
	ll a,b;
	scanf("%lld %lld", &a, &b);
	ll result = pow(a, b);
	if (isGreaterThanLimit) {
		printf("%06lld\n", result);
		// string s = to_string(result);
		// for (int i=s.length(); i<6; i++) {
		// 	printf("0");
		// }
		// cout << s << endl;
	} else {
		printf("%lld\n", result);
	}

	return 0;
}