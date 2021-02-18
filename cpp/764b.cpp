/*
	B.Timofey and cubes
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<n/2; i++) {
		if (i%2==0) {
			int temp=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=temp;
		}
	}
	for (int i=0; i<n; i++)
		printf("%d ", a[i]);

	return 0;
}