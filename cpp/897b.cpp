/*
	B. Chtholly's request
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,p;
	scanf("%d%d", &k, &p);
	unsigned long long sum=0;
	for (int i=1; i<=k; i++) {
		unsigned long long temp=i,add=i;
		while (temp!=0) {
			add = (add*10) + (temp%10);
			temp/=10;
		}
		sum = (sum+add)%p;
	}
	cout << sum;

	return 0;
}