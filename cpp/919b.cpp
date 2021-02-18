/*	
	B. Perfect Number
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int sumDigit(int x) {
	int sum=0;
	while (x>0) {
		sum += x%10;
		x /= 10;
	}
	return sum;
}

int count(int n) {
	int result=0;
	for (int i=29; i<=n; ++i) {
		if (sumDigit(i)>10)
			result++;
	}
	return result;
}

int main() {
	int k;
	scanf("%d", &k);
	int add = count(k);
	while (add--) {
		++k;
		if (sumDigit(k)>10)
			add++;
	}
	printf("%d%d\n", k, 10-sumDigit(k));

	return 0;
}