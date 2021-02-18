/*	
	B. Sqare Difference
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long x) {
	if (x%2==0)
		return false;
	else {
		long long i=3;
		bool result = true;
		while (result && i*i<=x) {
			if (x%i==0)
				result=false;
			else i+=2;
		}
		return result;
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a,b;
		cin >> a >> b;
		if (a-b>1)
			printf("NO\n");
		else {
			if (isPrime(a+b))
				printf("YES\n");
			else printf("NO\n");
		}
	}

	return 0;
}