/*	
	A. Tricky Sum
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int cekpo2(int x) {
	return (x==1? 0 : 1+cekpo2(x/2));
}

int main() {
	int t;
	long long n;
	scanf("%d", &t);
	while (t--) {
		cin >> n;
		cout << n*(n+1)/2 - (2*(((int)pow(2, 1+cekpo2(n))) - 1))<< endl;
	}

	return 0;
}