/*	
	A. Sereja and DIma
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int front=0, back=n-1;
	int sereja=0, dima=0;
	bool serejaTurn=true;
	while (front<=back) {
		if (a[front]>a[back]) {
			if (serejaTurn) {
				sereja += a[front];
				serejaTurn=false;
			} else {
				dima += a[front];
				serejaTurn=true;
			}
			++front;
		} else {
			if (serejaTurn) {
				sereja += a[back];
				serejaTurn=false;
			} else {
				dima += a[back];
				serejaTurn=true;
			}
			--back;
		}
	}
	printf("%d %d\n", sereja, dima);

	return 0;
}