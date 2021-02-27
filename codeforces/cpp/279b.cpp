/*	
	B. Books
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t;
	scanf("%d%d", &n, &t);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int front=0, back=0, max=0, sum=0, temp;
	while (back<n) {
		sum += a[back];
		if (sum<=t) {
			temp = back-front+1;
			if (temp>max)
				max = temp;
			back++;
			if (sum==t) {
				sum -= a[front];
				front++;
		} else {
			if (front == back) {
				sum -= a[back];
				front++;
				back++;
			} else {
				sum -= (a[front]+a[back]);
				front++;
			}
		}
	}
	printf("%d\n", max);

	return 0;
}