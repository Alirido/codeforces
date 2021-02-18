/*	
	B. Equations of Mathematical Magic
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int a[32];

void init() {
	for (int i=0; i<=30; i++) {
		a[i]=1;
		for (int j=1; j<=i; j++)
			a[i] *=2;
	}
}

// long long a[32],factorial[16];

// void f() {
// 	factorial[0]=0;
// 	for (int i=1; i<=15; i++) {
// 		factorial[i]=1;
// 		for (int j=2; j<=i; j++)
// 			factorial[i] *= j;
// 	}
// }

// void init() {
// 	f();
// 	a[0]=1; a[1]=2;
// 	long long temp;
// 	for (int i=2; i<=30; i++) {
// 		a[i] = 2;
// 		if (i%2) {
// 			for (int j=1; j<i/2; j++) {
// 				temp=1;
// 				for (int k=i; k>i-j; k--) {
// 					temp *= k;
// 				}
// 				temp /= factorial[j];
// 				a[i]+=2*temp;
// 			}
// 		} else {
// 			for (int j=1; j<(i-1)/2; j++) {
// 				temp=1;
// 				for (int k=i; k>i-j; k--) {
// 					temp *= k;
// 				}
// 				temp /= factorial[j];
// 				a[i]+=2*temp;
// 			}
// 			temp=1;
// 			for (int k=i; k>i/2;k--)
// 				temp *= k;
// 			temp /= factorial[i/2];
// 			a[i]+=temp;
// 		}
// 	}
// }

int countOne(int x) {
	if (x==0)
		return 0;
	int result=1;
	while (x>1) {
		if (x%2)
			result++;
		x/=2;
	}
	return result;
}


int main() {
	int t;
	scanf("%d", &t);

	init();

	while (t--) {
		int x;
		scanf("%d", &x);
		cout << a[countOne(x)] << endl;
	}

	return 0;
}